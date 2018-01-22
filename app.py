#!/usr/bin/python2
import wx
import moviepy.editor as mov
from PIL import Image
import os
import thread
# from __future__ import unicode_literals
# import youtube_dl
#import the newly created GUI file
import gui


def ClipFrameToWxBitmap ( clip, frame ):
    fr = clip.get_frame((frame/clip.fps))
    pil = Image.fromarray(fr)
    bm = PilImageToWxBitmap(pil)
    return bm


def WxImageToWxBitmap( myWxImage ):
    return myWxImage.ConvertToBitmap()


def PilImageToWxBitmap( myPilImage ):
    return WxImageToWxBitmap( PilImageToWxImage( myPilImage ) )


def PilImageToWxImage( myPilImage ):
    myWxImage = wx.EmptyImage( myPilImage.size[0], myPilImage.size[1] )
    myWxImage.SetData( myPilImage.convert( 'RGB' ).tobytes() )
    return myWxImage


class MainFrame(gui.MainFrame):
    def __init__ (self, parent):
        #initialize parent class
        gui.MainFrame.__init__(self, parent)
        self.clip = None
        self.clipFrames = None
        self.currentFrame = None
        self.extremes = {'l': None, 'r': None}
        self.lastDirectory = ''
        self.more_than_480p = None

    def draw_frame ( self, frame ):
        self.currentFrame = frame
        self.m_frame_bitmap.SetBitmap(
            ClipFrameToWxBitmap(self.clip, self.currentFrame))
        self.m_frame_slider.SetValue(frame)
        self.m_main_statusbar.SetStatusText(
            'Frame %d/%d'%(self.currentFrame, self.clipFrames), 2)

    def load_clip (self, filename ):
        self.clip = mov.VideoFileClip(filename)
        self.clipFrames = self.clip.duration*self.clip.fps
        self.m_frame_slider.SetMax(int(self.clipFrames))
        self.extremes = {'l': None, 'r': None}
        self.m_main_statusbar.SetStatusText('', 0)
        self.m_main_statusbar.SetStatusText('', 1)
        self.more_than_480p = self.clip.size[1] > 480
        # should have a better way to resize the window based
        # on the size of the frame
        # b_main_sizer = self.GetSizer()
        # b_main_sizer.Remove(self.m_frame_bitmap)
        # self.m_frame_bitmap.Destroy()
        # self.m_frame_bitmap = wx.StaticBitmap(  self,
        #                                         wx.ID_ANY,
        #                                         wx.NullBitmap,
        #                                         wx.DefaultPosition,
        #                                         wx.Size(
        #                                             self.clip.size[0],
        #                                             self.clip.size[1]
        #                                         ),
        #                                         0 )
        # b_main_sizer.Insert( 0, self.m_frame_bitmap, 1, wx.ALL|wx.EXPAND, 5 )
        self.draw_frame(0)
        self.SetSize(wx.Size(   self.clip.size[0]+50,
                                self.clip.size[1]+200))
        # b_main_sizer.SetMinSize(wx.Size(800,800))

    def skip( self, skip ):
        frame = self.currentFrame + skip
        if frame >= 0 and frame <= self.clipFrames:
            self.draw_frame(frame)

    def update_progress_bar(self, cur, tot):
        if cur + 1 >= tot:
            wx.CallAfter(self.m_progress_bar.SetValue, 0)
        else:
            wx.CallAfter(self.m_progress_bar.SetValue, int(100*(cur)/tot))

    def export_gif( self, filename ):
        clip = (mov.VideoFileClip(self.source)
                .subclip((self.extremes['l']/self.clip.fps),
                         (self.extremes['r']/self.clip.fps))
                .resize(height=min(self.clip.size[1], self.m_spin_resolution.GetValue())))

        thread.start_new_thread(clip.write_gif, (filename,), {
            'program': 'ffmpeg',
            'fps': self.m_spin_fps.GetValue(),
            'fuzz': self.m_spin_fuzz.GetValue(),
            'progress_bar': False,
            'progress_cb': self.update_progress_bar
            })

    def open_file_dialog ( self, event ):
        openFileDialog = wx.FileDialog( self, "Open", self.lastDirectory, "",
                                        "MP4 files (*.mp4)|*.mp4|" +
                                        "MPEG files (*.mpeg)|*.mpeg|" +
                                        "AVI files (*.avi)|*.avi|" +
                                        "OGV files (*.ogv)|*.ogv|" +
                                        "MOV files (*.mov)|*.mov",
                                        wx.FD_OPEN | wx.FD_FILE_MUST_EXIST)
        openFileDialog.ShowModal()
        self.source = openFileDialog.GetPath()
        self.lastDirectory = os.path.dirname(self.source)
        openFileDialog.Destroy()
        self.load_clip(self.source)

    def save_gif_dialog( self, event ):
        if type(self.extremes['l']) != int or \
           type(self.extremes['r']) != int or \
           self.extremes['l'] >= self.extremes['r']:
            dial = wx.MessageDialog(None,
                'Both extremes need to be set, and it should hold that [ < ]',
                'Incompatible extremes',
            wx.OK | wx.ICON_EXCLAMATION)
            dial.ShowModal()
        else:
            saveFileDialog = wx.FileDialog(self, "Save As", "", "",
                                           "GIF files (*.gif)|*.gif",
                                           wx.FD_SAVE | wx.FD_OVERWRITE_PROMPT)
            saveFileDialog.ShowModal()
            filename = saveFileDialog.GetPath()
            self.lastDirectory = os.path.dirname(filename)
            saveFileDialog.Destroy()
            self.export_gif(filename)

    # def youtbue_dialog (self, event):
    #     pass
    #
    # def youtube_vide_downloaded(self, d):
    #     if d['status'] == 'finished':
    #         print('Done downloading, now converting ...')
    #
    # def open_youtube_video( self, url ):
    #     ydl_opts = {
    #         'format': 'bestaudio/best',
    #         'progress_hooks': [self.youtube_vide_downloaded],
    #     }
    #     with youtube_dl.YoutubeDL(ydl_opts) as ydl:
    #         ydl.download([url])

    def set_left_extreme( self, event ):
        self.extremes['l'] = self.currentFrame
        self.m_main_statusbar.SetStatusText(
            'Starting frame: %d/%d'%(self.extremes['l'],self.clipFrames), 0)

    def set_right_extreme( self, event ):
        self.extremes['r'] = self.currentFrame
        self.m_main_statusbar.SetStatusText(
            'Ending frame: %d/%d'%(self.extremes['r'],self.clipFrames), 1)

    def go_to_left_extreme( self, event ):
        if type(self.extremes['l']) == int:
            self.draw_frame(self.extremes['l'])

    def go_to_right_extreme( self, event ):
        if type(self.extremes['r']) == int:
            self.draw_frame(self.extremes['r'])

    def rewind_10( self, event ):
        self.skip(-10)

    def rewind_1( self, event ):
        self.skip(-1)

    def forward_1( self, event ):
        self.skip(1)

    def forward_10( self, event ):
        self.skip(10)

    def scrollbar_draw( self, event ):
        # if event.GetPosition() % int(self.clipFrames/100) < 20:
        if not self.more_than_480p:
            self.draw_frame(event.GetPosition())

    def scrollbar_change( self, event ):
        if self.more_than_480p:
            self.draw_frame(event.GetPosition())


if __name__ == "__main__":
    #mandatory in wx, create an app, False stands for not deteriction stdin/stdout
    #refer manual for details
    app = wx.App(False)
    #create an object of CalcFrame
    frame = MainFrame(None)
    #show the frame
    frame.Show(True)
    #start the applications
    app.MainLoop()

# -*- coding: utf-8 -*-

###########################################################################
## Python code generated with wxFormBuilder (version Feb 16 2016)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

###########################################################################
## Class MainFrame
###########################################################################

class MainFrame ( wx.Frame ):

	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"Gif-o-matic", pos = wx.DefaultPosition, size = wx.Size( -1,-1 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )

		self.SetSizeHintsSz( wx.Size( 640,480 ), wx.DefaultSize )

		self.m_main_menubar = wx.MenuBar( 0 )
		self.m_file_menu = wx.Menu()
		self.m_open_file = wx.MenuItem( self.m_file_menu, wx.ID_ANY, u"Open video", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_file_menu.AppendItem( self.m_open_file )

		self.m_save_gif = wx.MenuItem( self.m_file_menu, wx.ID_ANY, u"Save gif", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_file_menu.AppendItem( self.m_save_gif )

		self.m_main_menubar.Append( self.m_file_menu, u"File" )

		self.m_help_menu = wx.Menu()
		self.m_about = wx.MenuItem( self.m_help_menu, wx.ID_ANY, u"About", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_help_menu.AppendItem( self.m_about )

		self.m_main_menubar.Append( self.m_help_menu, u"Help" )

		self.SetMenuBar( self.m_main_menubar )

		b_main_sizer = wx.BoxSizer( wx.VERTICAL )

		self.m_frame_bitmap = wx.StaticBitmap( self, wx.ID_ANY, wx.NullBitmap, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_frame_bitmap.SetBackgroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_WINDOW ) )

		b_main_sizer.Add( self.m_frame_bitmap, 1, wx.ALL|wx.EXPAND, 5 )

		self.m_frame_slider = wx.Slider( self, wx.ID_ANY, 0, 0, 0, wx.DefaultPosition, wx.DefaultSize, wx.SL_HORIZONTAL )
		b_main_sizer.Add( self.m_frame_slider, 0, wx.ALL|wx.EXPAND, 5 )

		b_toolbar_sizer = wx.BoxSizer( wx.HORIZONTAL )

		self.m_left_extreme_button = wx.Button( self, wx.ID_ANY, u"Set   [", wx.DefaultPosition, wx.Size( 60,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_left_extreme_button, 0, wx.ALL, 5 )

		self.m_right_extreme_button = wx.Button( self, wx.ID_ANY, u"Set   ]", wx.DefaultPosition, wx.Size( 60,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_right_extreme_button, 0, wx.ALL, 5 )


		b_toolbar_sizer.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_go_to_left_ext = wx.Button( self, wx.ID_ANY, u"Go to  [", wx.DefaultPosition, wx.Size( 60,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_go_to_left_ext, 0, wx.ALL, 5 )

		self.m_go_to_right_ext = wx.Button( self, wx.ID_ANY, u"Go to  ]", wx.DefaultPosition, wx.Size( 60,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_go_to_right_ext, 0, wx.ALL, 5 )


		b_toolbar_sizer.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_minus_10_button = wx.Button( self, wx.ID_ANY, u"<<", wx.DefaultPosition, wx.Size( 40,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_minus_10_button, 0, wx.ALL, 5 )

		self.m_minus_1_button = wx.Button( self, wx.ID_ANY, u"<", wx.DefaultPosition, wx.Size( 40,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_minus_1_button, 0, wx.ALL, 5 )

		self.m_plus_1_button = wx.Button( self, wx.ID_ANY, u">", wx.DefaultPosition, wx.Size( 40,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_plus_1_button, 0, wx.ALL, 5 )

		self.m_plus_10_button = wx.Button( self, wx.ID_ANY, u">>", wx.DefaultPosition, wx.Size( 40,-1 ), 0 )
		b_toolbar_sizer.Add( self.m_plus_10_button, 0, wx.ALL, 5 )


		b_main_sizer.Add( b_toolbar_sizer, 0, wx.EXPAND, 5 )

		bSizer3 = wx.BoxSizer( wx.HORIZONTAL )

		self.m_staticText1 = wx.StaticText( self, wx.ID_ANY, u"Max height (px)", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText1.Wrap( -1 )
		bSizer3.Add( self.m_staticText1, 0, wx.ALL, 5 )

		self.m_spin_resolution = wx.SpinCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 60,-1 ), wx.SP_ARROW_KEYS, 0, 1080, 360 )
		bSizer3.Add( self.m_spin_resolution, 0, wx.ALL, 5 )


		bSizer3.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText2 = wx.StaticText( self, wx.ID_ANY, u"Fuzziness", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText2.Wrap( -1 )
		bSizer3.Add( self.m_staticText2, 0, wx.ALL, 5 )

		self.m_spin_fuzz = wx.SpinCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 50,-1 ), wx.SP_ARROW_KEYS, 0, 100, 10 )
		bSizer3.Add( self.m_spin_fuzz, 0, wx.ALL, 5 )


		bSizer3.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText3 = wx.StaticText( self, wx.ID_ANY, u"Fps", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText3.Wrap( -1 )
		bSizer3.Add( self.m_staticText3, 0, wx.ALL, 5 )

		self.m_spin_fps = wx.SpinCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 50,-1 ), wx.SP_ARROW_KEYS, 1, 120, 15 )
		bSizer3.Add( self.m_spin_fps, 0, wx.ALL, 5 )


		b_main_sizer.Add( bSizer3, 0, wx.EXPAND, 5 )

		bSizer5 = wx.BoxSizer( wx.HORIZONTAL )

		self.m_progress_bar = wx.Gauge( self, wx.ID_ANY, 100, wx.DefaultPosition, wx.DefaultSize, wx.GA_HORIZONTAL )
		self.m_progress_bar.SetValue( 0 )
		bSizer5.Add( self.m_progress_bar, 1, wx.ALL, 5 )


		b_main_sizer.Add( bSizer5, 0, wx.EXPAND, 5 )


		self.SetSizer( b_main_sizer )
		self.Layout()
		b_main_sizer.Fit( self )
		self.m_main_statusbar = self.CreateStatusBar( 3, wx.ST_SIZEGRIP, wx.ID_ANY )

		self.Centre( wx.BOTH )

		# Connect Events
		self.Bind( wx.EVT_MENU, self.open_file_dialog, id = self.m_open_file.GetId() )
		self.Bind( wx.EVT_MENU, self.save_gif_dialog, id = self.m_save_gif.GetId() )
		self.m_frame_slider.Bind( wx.EVT_SCROLL, self.scrollbar_draw )
		self.m_frame_slider.Bind( wx.EVT_SCROLL_CHANGED, self.scrollbar_change )
		self.m_left_extreme_button.Bind( wx.EVT_BUTTON, self.set_left_extreme )
		self.m_right_extreme_button.Bind( wx.EVT_BUTTON, self.set_right_extreme )
		self.m_go_to_left_ext.Bind( wx.EVT_BUTTON, self.go_to_left_extreme )
		self.m_go_to_right_ext.Bind( wx.EVT_BUTTON, self.go_to_right_extreme )
		self.m_minus_10_button.Bind( wx.EVT_BUTTON, self.rewind_10 )
		self.m_minus_1_button.Bind( wx.EVT_BUTTON, self.rewind_1 )
		self.m_plus_1_button.Bind( wx.EVT_BUTTON, self.forward_1 )
		self.m_plus_10_button.Bind( wx.EVT_BUTTON, self.forward_10 )

	def __del__( self ):
		pass


	# Virtual event handlers, overide them in your derived class
	def open_file_dialog( self, event ):
		event.Skip()

	def save_gif_dialog( self, event ):
		event.Skip()

	def scrollbar_draw( self, event ):
		event.Skip()

	def scrollbar_change( self, event ):
		event.Skip()

	def set_left_extreme( self, event ):
		event.Skip()

	def set_right_extreme( self, event ):
		event.Skip()

	def go_to_left_extreme( self, event ):
		event.Skip()

	def go_to_right_extreme( self, event ):
		event.Skip()

	def rewind_10( self, event ):
		event.Skip()

	def rewind_1( self, event ):
		event.Skip()

	def forward_1( self, event ):
		event.Skip()

	def forward_10( self, event ):
		event.Skip()

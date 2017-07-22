///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statbmp.h>
#include <wx/slider.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/gauge.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_main_menubar;
		wxMenu* m_file_menu;
		wxMenu* m_help_menu;
		wxStaticBitmap* m_frame_bitmap;
		wxSlider* m_frame_slider;
		wxButton* m_left_extreme_button;
		wxButton* m_right_extreme_button;
		wxButton* m_go_to_left_ext;
		wxButton* m_go_to_right_ext;
		wxButton* m_minus_10_button;
		wxButton* m_minus_1_button;
		wxButton* m_plus_1_button;
		wxButton* m_plus_10_button;
		wxStaticText* m_staticText1;
		wxSpinCtrl* m_spin_resolution;
		wxStaticText* m_staticText2;
		wxSpinCtrl* m_spin_fuzz;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_spin_fps;
		wxGauge* m_progress_bar;
		wxStatusBar* m_main_statusbar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void open_file_dialog( wxCommandEvent& event ) { event.Skip(); }
		virtual void save_gif_dialog( wxCommandEvent& event ) { event.Skip(); }
		virtual void scrollbar_draw( wxScrollEvent& event ) { event.Skip(); }
		virtual void scrollbar_change( wxScrollEvent& event ) { event.Skip(); }
		virtual void set_left_extreme( wxCommandEvent& event ) { event.Skip(); }
		virtual void set_right_extreme( wxCommandEvent& event ) { event.Skip(); }
		virtual void go_to_left_extreme( wxCommandEvent& event ) { event.Skip(); }
		virtual void go_to_right_extreme( wxCommandEvent& event ) { event.Skip(); }
		virtual void rewind_10( wxCommandEvent& event ) { event.Skip(); }
		virtual void rewind_1( wxCommandEvent& event ) { event.Skip(); }
		virtual void forward_1( wxCommandEvent& event ) { event.Skip(); }
		virtual void forward_10( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Gif-o-matic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialog
///////////////////////////////////////////////////////////////////////////////
class AboutDialog : public wxPanel 
{
	private:
	
	protected:
		wxButton* m_button9;
	
	public:
		
		AboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL ); 
		~AboutDialog();
	
};

#endif //__NONAME_H__

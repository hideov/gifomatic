///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 640,480 ), wxDefaultSize );
	
	m_main_menubar = new wxMenuBar( 0 );
	m_file_menu = new wxMenu();
	wxMenuItem* m_open_file;
	m_open_file = new wxMenuItem( m_file_menu, wxID_ANY, wxString( wxT("Open video") ) , wxEmptyString, wxITEM_NORMAL );
	m_file_menu->Append( m_open_file );
	
	wxMenuItem* m_save_gif;
	m_save_gif = new wxMenuItem( m_file_menu, wxID_ANY, wxString( wxT("Save gif") ) , wxEmptyString, wxITEM_NORMAL );
	m_file_menu->Append( m_save_gif );
	
	m_main_menubar->Append( m_file_menu, wxT("File") ); 
	
	m_help_menu = new wxMenu();
	wxMenuItem* m_about;
	m_about = new wxMenuItem( m_help_menu, wxID_ANY, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	m_help_menu->Append( m_about );
	
	m_main_menubar->Append( m_help_menu, wxT("Help") ); 
	
	this->SetMenuBar( m_main_menubar );
	
	wxBoxSizer* b_main_sizer;
	b_main_sizer = new wxBoxSizer( wxVERTICAL );
	
	m_frame_bitmap = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_frame_bitmap->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	b_main_sizer->Add( m_frame_bitmap, 1, wxALL|wxEXPAND, 5 );
	
	m_frame_slider = new wxSlider( this, wxID_ANY, 0, 0, 0, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	b_main_sizer->Add( m_frame_slider, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* b_toolbar_sizer;
	b_toolbar_sizer = new wxBoxSizer( wxHORIZONTAL );
	
	m_left_extreme_button = new wxButton( this, wxID_ANY, wxT("Set   ["), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	b_toolbar_sizer->Add( m_left_extreme_button, 0, wxALL, 5 );
	
	m_right_extreme_button = new wxButton( this, wxID_ANY, wxT("Set   ]"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	b_toolbar_sizer->Add( m_right_extreme_button, 0, wxALL, 5 );
	
	
	b_toolbar_sizer->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_go_to_left_ext = new wxButton( this, wxID_ANY, wxT("Go to  ["), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	b_toolbar_sizer->Add( m_go_to_left_ext, 0, wxALL, 5 );
	
	m_go_to_right_ext = new wxButton( this, wxID_ANY, wxT("Go to  ]"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	b_toolbar_sizer->Add( m_go_to_right_ext, 0, wxALL, 5 );
	
	
	b_toolbar_sizer->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_minus_10_button = new wxButton( this, wxID_ANY, wxT("<<"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	b_toolbar_sizer->Add( m_minus_10_button, 0, wxALL, 5 );
	
	m_minus_1_button = new wxButton( this, wxID_ANY, wxT("<"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	b_toolbar_sizer->Add( m_minus_1_button, 0, wxALL, 5 );
	
	m_plus_1_button = new wxButton( this, wxID_ANY, wxT(">"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	b_toolbar_sizer->Add( m_plus_1_button, 0, wxALL, 5 );
	
	m_plus_10_button = new wxButton( this, wxID_ANY, wxT(">>"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	b_toolbar_sizer->Add( m_plus_10_button, 0, wxALL, 5 );
	
	
	b_main_sizer->Add( b_toolbar_sizer, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Height (px)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer3->Add( m_staticText1, 0, wxALL, 5 );
	
	m_spin_resolution = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 1080, 360 );
	bSizer3->Add( m_spin_resolution, 0, wxALL, 5 );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Fuzziness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALL, 5 );
	
	m_spin_fuzz = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 100, 10 );
	bSizer3->Add( m_spin_fuzz, 0, wxALL, 5 );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Fps"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer3->Add( m_staticText3, 0, wxALL, 5 );
	
	m_spin_fps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 120, 15 );
	bSizer3->Add( m_spin_fps, 0, wxALL, 5 );
	
	
	b_main_sizer->Add( bSizer3, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_progress_bar = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	m_progress_bar->SetValue( 0 ); 
	bSizer5->Add( m_progress_bar, 1, wxALL, 5 );
	
	
	b_main_sizer->Add( bSizer5, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( b_main_sizer );
	this->Layout();
	b_main_sizer->Fit( this );
	m_main_statusbar = this->CreateStatusBar( 3, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_open_file->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::open_file_dialog ) );
	this->Connect( m_save_gif->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::save_gif_dialog ) );
	m_frame_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::scrollbar_change ), NULL, this );
	m_left_extreme_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::set_left_extreme ), NULL, this );
	m_right_extreme_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::set_right_extreme ), NULL, this );
	m_go_to_left_ext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::go_to_left_extreme ), NULL, this );
	m_go_to_right_ext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::go_to_right_extreme ), NULL, this );
	m_minus_10_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::rewind_10 ), NULL, this );
	m_minus_1_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::rewind_1 ), NULL, this );
	m_plus_1_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::forward_1 ), NULL, this );
	m_plus_10_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::forward_10 ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::open_file_dialog ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::save_gif_dialog ) );
	m_frame_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::scrollbar_draw ), NULL, this );
	m_frame_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::scrollbar_change ), NULL, this );
	m_left_extreme_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::set_left_extreme ), NULL, this );
	m_right_extreme_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::set_right_extreme ), NULL, this );
	m_go_to_left_ext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::go_to_left_extreme ), NULL, this );
	m_go_to_right_ext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::go_to_right_extreme ), NULL, this );
	m_minus_10_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::rewind_10 ), NULL, this );
	m_minus_1_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::rewind_1 ), NULL, this );
	m_plus_1_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::forward_1 ), NULL, this );
	m_plus_10_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::forward_10 ), NULL, this );
	
}

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_button9 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
}

AboutDialog::~AboutDialog()
{
}

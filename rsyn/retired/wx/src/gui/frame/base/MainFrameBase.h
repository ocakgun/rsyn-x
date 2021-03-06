///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINFRAMEBASE_H__
#define __MAINFRAMEBASE_H__

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
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/srchctrl.h>
#include <wx/propgrid/propgrid.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/choicebk.h>
#include <wx/button.h>
#include <wx/slider.h>
#include <wx/statbox.h>
#include <wx/propgrid/advprops.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/statline.h>
#include <wx/notebook.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>

///////////////////////////////////////////////////////////////////////////

#define ID_RUN_SCRIPT 1000
#define ID_LOAD_PLACEMENT_PL_FILE 1001
#define ID_LOAD_COLORS_FILE 1002
#define ID_SAVE_PLACEMENT_PL_FILE 1003
#define ID_SAVE_DEF 1004
#define ID_Quit 1005
#define ID_SAVE_SNAPSHOT 1006
#define ID_RESET_CAMERA 1007
#define ID_ZOOM_IN 1008
#define ID_ZOOM_OUT 1009
#define ID_PHYSICAL 1010
#define ID_SCHEMATIC 1011
#define ID_RAINBOW 1012
#define ID_COLORING_RANDOM_BLUE 1013
#define ID_GENERATE_COLORS_FILE 1014

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* clsMenuBar;
		wxMenu* clsMenuFile;
		wxMenu* clsMenuCanvas;
		wxMenuItem* clsMenuItemPhysicalCanvas;
		wxMenuItem* clsMenuItemSchematicCanvas;
		wxMenu* clsMenuColoring;
		wxMenuItem* clsMenuItemColoringColorful;
		wxMenuItem* clsMenuItemColoringRandomBlue;
		wxMenuItem* clsMenuitemColoringGray;
		wxMenu* clsHelp;
		wxMenuItem* clsAbout;
		wxPanel* clsPanelMain;
		wxBoxSizer* clsSizerMesh;
		wxNotebook* clsNotebook;
		wxPanel* design_panel;
		wxSearchCtrl* clsTxtSearch;
		wxChoicebook* clsChoicebookProperties;
		wxPanel* clsPanelDesign;
		wxPropertyGrid* clsPropertyGridDesign;
		wxPGProperty* clsPropertyGridItemDesignName;
		wxPGProperty* m_propertyGridItem35;
		wxPGProperty* clsPropertyGridItemDesignNumCells;
		wxPGProperty* clsPropertyGridItemDesignNumMacros;
		wxPGProperty* clsPropertyGridItemDesignNumInputPins;
		wxPGProperty* clsPropertyGridItemDesignNumOutputPins;
		wxPGProperty* clsPropertyGridItemDesignNumNets;
		wxPGProperty* clsPropertyGridItemDesignNumFixedCells;
		wxPGProperty* clsPropertyGridItemDesignNumMovableCells;
		wxPanel* clsPanelCellTiming;
		wxPropertyGrid* clsPropertyGridCellTiming;
		wxPGProperty* clsPropertyGridItemCellTimingName;
		wxPGProperty* clsPropertyGridItemCellTimingLibCell;
		wxPGProperty* m_propertyGridItem1211;
		wxPGProperty* clsPropertyGridItemCellCriticality;
		wxPGProperty* clsPropertyGridItemCellCentrality;
		wxPGProperty* clsPropertyGridItemCellRelativity;
		wxPGProperty* m_propertyGridItem12111;
		wxPGProperty* clsPropertyGridItemCellDelay;
		wxPGProperty* clsPropertyGridItemCellInputWireDelay;
		wxPGProperty* clsPropertyGridItemCellOutputWireDelay;
		wxPGProperty* clsPropertyGridItemCellRcDelay;
		wxPGProperty* clsPropertyGridItemCellPercentageDelay;
		wxPGProperty* m_propertyGridItem121113;
		wxPGProperty* clsPropertyGridItemCellInputSlew;
		wxPGProperty* clsPropertyGridItemCellOutputSlew;
		wxPGProperty* m_propertyGridItem121112;
		wxPGProperty* clsPropertyGridItemCellLoad;
		wxPGProperty* clsPropertyGridItemCellGain;
		wxPGProperty* m_propertyGridItem121111;
		wxPGProperty* clsPropertyGridItemCellDriverResistance;
		wxStaticText* m_staticText18031;
		wxRadioButton* clsOptCellTimingModeEarly;
		wxRadioButton* clsOptCellTimingModeLate;
		wxPanel* clsPanelCellPhysical;
		wxPropertyGrid* clsPropertyGridCellPhysical;
		wxPGProperty* clsPropertyGridItemCellPhysicalName;
		wxPGProperty* clsPropertyGridItemCellPhysicalLibCell;
		wxPGProperty* m_propertyGridItem911;
		wxPGProperty* clsPropertyGridItemCellX;
		wxPGProperty* clsPropertyGridItemCellY;
		wxPGProperty* clsPropertyGridItemCellFixedCurrent;
		wxPGProperty* clsPropertyGridItemCellFixedOriginal;
		wxPGProperty* clsPropertyGridItemCellLegalized;
		wxPGProperty* m_propertyGridItem121;
		wxPGProperty* clsPropertyGridItemCellWidth;
		wxPGProperty* clsPropertyGridItemCellHeight;
		wxPanel* clsPanelNet;
		wxPropertyGrid* clsPropertyGridNet;
		wxPGProperty* clsPropertyGridItemNetName;
		wxPGProperty* clsPropertyGridItemNetDriverCount;
		wxPGProperty* clsPropertyGridItemNetSinkCount;
		wxPanel* clsPanelPin;
		wxPropertyGrid* clsPropertyGridPin;
		wxPGProperty* clsPropertyGridItemPinName;
		wxPGProperty* clsPropertyGridItemPinInstance;
		wxPGProperty* clsPropertyGridItemPinDirection;
		wxPanel* canvas_panel;
		wxChoicebook* clsChoicebookView;
		wxPanel* clsPanelPhysicalView;
		wxStaticBoxSizer* sizerViewMode;
		wxPanel* m_panel10;
		wxButton* m_button51;
		wxSlider* clsSlider;
		wxPropertyGrid* clsOverlayPropertyGrid;
		wxChoicebook* clsChoicebookColoring;
		wxPanel* m_panel40;
		wxStaticText* m_staticText180;
		wxRadioButton* clsOptColoringCriticalityEarly;
		wxRadioButton* clsOptColoringCriticalityLate;
		wxButton* clsBtnColoringCriticality;
		wxPanel* m_panel402;
		wxStaticText* m_staticText1803;
		wxRadioButton* clsOptColoringCentralityEarly;
		wxRadioButton* clsOptColoringCentralityLate;
		wxButton* clsBtnColoringCentrality;
		wxPanel* m_panel40111;
		wxStaticText* m_staticText180121;
		wxRadioButton* clsOptColoringRelativityEarly;
		wxRadioButton* clsOptColoringRelativityLate1;
		wxButton* clsBtnColoringRelativity;
		wxPanel* clsPanelSchematicView;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText15;
		wxTextCtrl* clsNumCriticalPaths;
		wxCheckBox* clsSchematicDrawPaths;
		wxStaticText* m_staticText18;
		wxTextCtrl* clsSelectedCellName;
		wxCheckBox* clsSchematicSelectedCell;
		wxCheckBox* clsSchematicNeighborCells;
		wxCheckBox* clsSchematicLogicCone;
		wxPanel* opto_panel;
		wxChoice* clsFlow;
		wxButton* clsBtnRun;
		wxStaticText* m_staticText18011;
		wxRadioButton* clsOptUpdateFull;
		wxRadioButton* clsOptUpdateIncremental;
		wxButton* clsBtnUpdateSteinerTrees;
		wxButton* clsBtnUpdateTiming;
		wxButton* clsBtnLegalize;
		wxStaticLine* m_staticline13;
		wxChoice* clsSingleCellLegalizationMethod;
		wxButton* clsBtnLegalizeSelectedCell;
		wxTextCtrl* clsTxtCommand;
		wxStaticText* clsLblHover;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseWindow( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnRunScript( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLoadPlFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLoadColorsFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSavePlFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveDEF( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveSnapshot( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetCamera( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnZoomIn( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnZoomOut( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChangeView( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColoringColorful( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColoringRandomBlue( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColoringGray( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerateColorsFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLeftDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftUp( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnMouseMotion( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnCheckCellTimingMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChangeView( wxChoicebookEvent& event ) { event.Skip(); }
		virtual void OnCheckpoint( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnOverlayPropertyGridChanged( wxPropertyGridEvent& event ) { event.Skip(); }
		virtual void OnColoringCriticality( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColoringCentrality( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColoringRelativity( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSchematicNumCriticalPaths( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSchematicClickView( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRun( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateSteinerTrees( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateTiming( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLegalize( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLegalizeSelectedCell( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExecuteCommandChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnExecuteCommandKeyDown( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnExecuteCommandKeyUp( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnExecuteCommand( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Rsyn - Universidade Federal do Rio Grande do Sul (UFRGS)"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,720 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrameBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialogBase
///////////////////////////////////////////////////////////////////////////////
class AboutDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebook2;
		wxPanel* about_panel;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
	
	public:
		
		AboutDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Help"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE ); 
		~AboutDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SaveSnapshotBase
///////////////////////////////////////////////////////////////////////////////
class SaveSnapshotBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText29;
		wxSpinCtrl* m_spinCtrl2;
		wxStaticText* m_staticText30;
		wxComboBox* m_comboBox1;
		wxStaticText* m_staticText31;
		wxSpinCtrl* m_spinCtrl3;
		wxCheckBox* m_checkBox7;
		wxStaticText* m_staticText26;
		wxTextCtrl* m_textCtrl15;
		wxButton* m_button33;
		wxButton* m_button34;
		
		// Virtual event handlers, overide them in your derived class
		virtual void adjustHeight( wxSpinEvent& event ) { event.Skip(); }
		virtual void adjustWidth( wxSpinEvent& event ) { event.Skip(); }
		virtual void findPath( wxCommandEvent& event ) { event.Skip(); }
		virtual void saveSnapshot( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SaveSnapshotBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Save snapshot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 448,177 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~SaveSnapshotBase();
	
};

#endif //__MAINFRAMEBASE_H__

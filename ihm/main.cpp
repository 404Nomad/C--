#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <variant>
#include <exception>
#include <wx/wx.h>
#include <wx/grid.h>
#include "json.hpp"


using namespace std;
using json = nlohmann::json;

class MonApp : public wxApp {
    public:
        virtual bool OnInit();
};

class MaFrame : public wxFrame {
    public: 
        MaFrame(const wxString& title);
    private: 
        wxPanel* m_panel;
        wxButton* btn1;
};

wxIMPLEMENT_APP(MonApp);

// on definit mainteannt OnInit()
bool MonApp::OnInit() {
    SetAppName("MonApp");
    MaFrame* frame = new MaFrame("PremiereFenetre");
    frame->Show(true);
    return true;
};

MaFrame::MaFrame(const wxString &title)
: wxFrame(nullptr, wxID_ANY, title) {
    m_panel = new wxPanel(this);
    btn1 = new wxButton(m_panel, wxID_ANY, "Bouton 1");
};

#include <iostream>
using namespace std;

echo '#include <wx/wx.h>' > test.cpp
echo 'class MyApp : public wxApp { public: virtual bool OnInit() { wxMessageBox("Hello, wxWidgets!"); return false; } }; wxIMPLEMENT_APP(MyApp);' >> test.cpp
g++ test.cpp -o test `wx-config --cxxflags --libs`
./test
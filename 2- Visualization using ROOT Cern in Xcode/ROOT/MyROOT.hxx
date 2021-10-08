#ifndef MyROOT_hxx
#define MyROOT_hxx

#include "headers.hxx"

class MyROOT {
public:
  MyROOT()
      : _MyApp{new TApplication("App", 0, 0)}, _MyCanvas{
                                                   new TCanvas("c", "c")} {}
  void update() { _MyCanvas->Update(); }
  ~MyROOT() {
    _MyApp->Run();
    TQObject::Connect("TCanvas", "Closed()", "TApplication", gApplication,
                      "Terminate()");
  }

private:
  std::unique_ptr<TApplication> _MyApp;
  std::unique_ptr<TCanvas> _MyCanvas;
};


#endif /* MyROOT_hxx */

#include "MyROOT.hxx"

void graph() {
  MyROOT app;

  TF1 f1("f1", "sin(x)/x", -20., 20.);
  f1.Draw();

  app.update();
}

int main() {

  graph();

  return 0;
}

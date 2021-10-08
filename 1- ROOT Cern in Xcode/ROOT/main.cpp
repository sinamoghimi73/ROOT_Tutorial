#include "TMatrixD.h"
#include "TArrayD.h"


int main() {

    TMatrixD h(5,5);
    TArrayD data(25);
    for (Int_t i{}; i < 25; i++) {
       const Int_t ir = i/5;
       const Int_t ic = i%5;
       data[i] = 1./(ir+ic);
    }
    h.SetMatrixArray(data.GetArray());
    h.Print();
    
  return 0;
}

#include "core/MyMatrix.hh"
#include "../lib/mmio.h"

using namespace std;

int main() {
  string path001 = "data/fidap001.mtx";
  MyMatrix<double> a(10);
  std::cout << "Hello, World!" << std::endl;
  std::cout << a.toString() << std::endl;
  return 0;
}
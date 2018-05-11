//
// Created by Hell on 11.05.2018.
//

#ifndef FIS_MYMATRIX_HH
#define FIS_MYMATRIX_HH
#include <iostream>
#include <string>
#include <cstring>

template <typename T>
class MyMatrix {
  T *data;
  int size;
  int n, m;
 public:
  MyMatrix();
  MyMatrix(int size);
  MyMatrix(const MyMatrix &in);
  std::string & toString();
  ~MyMatrix();
};

#endif //FIS_MYMATRIX_HH

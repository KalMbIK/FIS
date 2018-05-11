//
// Created by Hell on 11.05.2018.
//

#include "MyMatrix.hh"

template <typename T>
MyMatrix<T>::MyMatrix() {data = nullptr;}
template <typename T>
MyMatrix<T>::~MyMatrix() {
  if (data!= nullptr)
    delete data;
}
template <typename T>
MyMatrix<T>::MyMatrix(int size) {
  this->size = size;
  data = new T[size];
}
template <typename T>
MyMatrix<T>::MyMatrix(const MyMatrix &in) {
  if (data != nullptr){
    delete data;
  }
  size = in.size;
  data = new T[size];
  std::memcpy(data,in.data,size* sizeof(T));
}
template <typename T>
std::string & MyMatrix<T>::toString() {
  std::string * str = new std::string("");
  std::string & rstr = *str;
  for (int i = 0; i < size; i++)
    rstr+=std::to_string(data[i]) + " ";
  return rstr;
}

template class MyMatrix<double>;
template class MyMatrix<int>;
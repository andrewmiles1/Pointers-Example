#include <iostream>
using namespace std;



int main() {
  int number;
  int * pNumber;
  pNumber = &number;
  void *pAnything; //can point at anything

  int size;
  int *myList;

  number = 50;
  cout << *pNumber++ << endl;
  cout << *pNumber << endl;

  cout << "Say how many numbers:" << endl;
  cin >> size;
  myList = new int[size];

  for(int i = 0; i < size; i++){
    *(myList+i) = i+1;
    cout << *(myList+i) << endl;
  }

  delete myList;

}
/*
Program name : N/A

Programmer : N/A

Date : 11 / 17 / 2023

Version : 1.9

Des : takes a given array and uses a fuction ot flip it without useing a seperate array 

*/

#include <iostream>

// prototype
void revArray(int[], const int);

int main() {
  // list intalization
  const int allList = 5;
  int anArray[allList] = {1,2,3,4,5};
  
  // display first list
  std::cout << "Before: ";
  for (int check = 0; check < allList; check++) {
    std::cout << anArray[check];
    std::cout << ",";
  }

  std::cout << "\n";
  revArray(anArray, allList);// calling ot flip array

  // display list after flip
  std::cout << "After: ";
  for (int check = 0; check < allList; check++) {
    std::cout << anArray[check];
    std::cout << ",";
  }

  return 0;
}


//FLIP IT
void revArray(int anArray[], const int allList) {
  int first = 0;
  int last = allList - 1;

  while (first < last) {// flip stuff how you tought us but with a loop
    int temp = anArray[first];

    anArray[first] = anArray[last];

    anArray[last] = temp;

    first++;
    last--;
  }

}
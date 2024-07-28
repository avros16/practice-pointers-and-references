#include <iostream>
using namespace std;

void Swap(int* ptr1, int* ptr2){

  int temp =*ptr2;
  *ptr2=*ptr1;
  *ptr1=temp;

  
}



int main() {

  int one{1};
  int two{2};

  
cout << one << "\n" << two << "\n";
  
  Swap(&one,&two);
  
  cout << one << "\n" << two;

  
}
#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

void case1(){
    int *ptr1 = nullptr;
    int *ptr2 = new int (55);
    int *ptr3 = ptr1;

    if(ptr1 != nullptr){ //this will prevent from dereferencing a nullptr, to prevent crashing
        cout << *ptr1 << endl;
    }

    delete ptr2;
    ptr2 = nullptr; //always reset pointer to prevent junk values
}
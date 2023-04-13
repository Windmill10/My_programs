#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

void sep(){
    std::cout << std::setfill('-') << std::setw(20);
    std::cout << " " << std::endl;
}

void pointers(){
    int *ptr;

    int number = 10;

    int *ptrn = &number;

    int *ptr4, numptr; //very confusing, don't do this, ptr4 is a pointer while numptr is an int

    std::cout << "size of ptr4 is: " << sizeof(ptr) << std::endl;
    std::cout << "size of numptr is: " << sizeof(numptr) << std::endl;
    
    std::cout << "the address of ptr is " << ptr4 << std::endl;

    std::cout << "The value of number is: " << *ptrn << endl;
}

void setTen(int *num){
    //int num1 = 10;
    *num = 10;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = *a;
    cout << "Value of a changed from: " << temp << " to " << *a << endl;
}


void charptr(){
    const char *pmessage = "Hello world!"; //no modification, must add const
    char message[] = "Hello world!"; //can modify the array(string)
    //int* number;
    //*number = 55; DON'T do this, don't write into junk address

    std::cout << pmessage << std::endl;

    for(auto value : message){
        std::cout << value;
    }
} 


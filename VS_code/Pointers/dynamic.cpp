#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

void dynamicMemory(){
    int *ptrnum = nullptr;
    ptrnum = new int; //this will allocate memory from the heap section, needs to be explicitly deleted
    *ptrnum = 10; //this will store into the dynamic allocated memory

    int *ptrnum2 = new int (22); //to delcare and initilize a new int with value, ()
    ptrnum2 = new int (23); //remember to delete it



    
    delete ptrnum; //this will delete the memory, and memory will be freed
    delete ptrnum2; //don't call delete on a pointer twice


    ptrnum = nullptr; //good habit
    ptrnum2 = nullptr;

}
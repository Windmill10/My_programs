#include<iostream>

void leak(){
    int *ptr = new int (10);
    int number = 15;

    ptr = new int(20); // this will also cause a memory leak

    ptr = &number; //this will cause a memory leak, assigning dynamic to one which is not
}
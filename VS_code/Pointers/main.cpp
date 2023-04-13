#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

void sep();
void pointers();
void setTen(int *num);
void swap(int *a, int *b);
void charptr();
void dynamicMemory();
void leak();

int main(int arg, char *argv[]){

    cout << "There are " << arg << " arguments";
    for(int i = 0; i < arg; i++){
        cout << argv[i] << endl;
    }
    dynamicMemory();
    
    return 0;
}

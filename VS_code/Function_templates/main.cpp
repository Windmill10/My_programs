#include"main.h"

template<typename T> T maximum(T a, T b); //function templates are not real c++ code
//they are just blueprints for the compiler

int main(){
    cout << "max(int)" << maximum(132, 14) << endl;
    cout << "max(double)" << maximum(23.312, 34.1231) << endl;
    cout << "max(string)" << maximum(std::string("abcde"), std::string("afdasfsadfas"))
    << endl;

}

template <typename T> T maximum(T a, T b){
    return(a > b) ? a : b;
}
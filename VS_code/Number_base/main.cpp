#include <iostream>

using std::cout;

int main(){

    int number1 = 15; 
    int number2 = 017;
    int number3 = 0x0F;
    int number4 = 0b00001111;

    cout << number1 << std::endl;
    cout << number2 << std::endl;
    cout << number3 << std::endl;
    cout << number4 << std::endl;

    return 0;
}
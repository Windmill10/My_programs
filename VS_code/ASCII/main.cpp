#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;

auto add(auto num1, auto num2){
    auto temp = num1 + num2;
    return temp;
}


int main(){
    //unsigned integers only store positive numbers, while signed interger can store both
    cout << add(1.1, 1.5) << std::endl;
    cout << add(1432, 1234) << std::endl;
    cout << add('1', '2') << std::endl;
    unsigned int a = -10;
    cout << a;


    return 0;
}






















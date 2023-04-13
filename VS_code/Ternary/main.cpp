#include <iostream>
#include <string>

using std::cout;
using std::endl;
int main(){
    int input;
    cout << "Enter a number from 1~100: ";

    std::cin >> input;
    
    std::string result = (input >= 50) ? "above average" : "below average"; //ternary operator
    cout << result << endl;


}
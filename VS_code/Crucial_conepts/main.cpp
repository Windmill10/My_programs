#include <iostream>
#include <iomanip>

void sep(){
    std::cout << std::setfill('-') << std::setw(20);
    std::cout << " " << std::endl;
}
/*

std::setw   can format table, use it before output eg:
    std::cout << std::setw(10) << "some words";

std::right, std::right(default) eg:
    std::cout << std::right;
std::internal eg:
    std::cout << std::internal << 1234;
        -1234 (without internal)
    -    1234 (with internal)
std::setfill('')
std::fixed  force output to not be scientific
std::scientific
std::setprecision(int)  any number smaller than the precision of that variable type
std::showpoint  force output of decimal points

*/
int main(int arg, char* augv[]){
    //first the ranged base for loop:

    std::cout << "Have " << arg << " arguments" << std::endl;
        for(int i = 0; i < arg; i++){
            std::cout << augv[i] << std::endl;
        }

    int arr[] = {2, 3, 4, 5, 6, 7}; 
    for(auto value : arr){
        std::cout << value << std::endl; 
        //note that the auto value will be the element of the array,
        //do not type arr[value]

    }
    sep();
    //std::cout << std::setfill('-') << std::setw(20);

    //second the ternary operator:
    int a = 10, b = 5;
    int max = (a > b) ? a : b;
    std::cout << max << std::endl;

    return 0;

    sep();

}
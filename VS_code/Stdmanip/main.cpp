#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

/*
std::flush  send output directly to terminal, ignoring output buffer
std::setw   can format table, use it before output eg:
    std::cout << std::setw(10) << "some words";

std::right, std::right(default) eg:
    std::cout << std::right;
std::internal eg:
    std::cout << std::internal << 1234;
        -1234 (without internal)
    -    1234 (with internal)
std::setfill('')
std::boolalpha, std::noboolalpha
std::showpos, std::noshowpos  will add "+" before positive number
std::dec, std::hex, std::oct  (add after std::cout, won't affect decimal numbers)
std::showbase  FF -> 0xFF 
std::uppercase, std::nouppercase
std::fixed  force output to not be scientific
std::scientific
std::setprecision(int)  limited by the type of variable
std::showpoint  force output of decimal points

*/
int ma in(){
    //std::cout << std::numeric_limits<int>::max;
    std::cout << std::setw(10) << "some words";



}
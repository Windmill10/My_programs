#include<iostream>
#include<string>

using std::cout;
using std::endl;

void strings(std::string& str){
    std::cout << str;   
}

void max(const int& input1, const int& input2, int& output){
    output = input1 > input2 ? input1 : input2;
}

auto min(const auto input1, const auto input2){
    return (input1 > input2) ? input2 : input1;
}
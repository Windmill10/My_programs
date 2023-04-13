#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include <algorithm>
#include <math.h>
#include<iomanip>
#include<vector>
#include<cstring>
#include<string>
#include<cstdlib>
#include<time.h>
#include<list>
#include<random>

using std::string;
using std::cout;
using std::cin;
using std::endl;


const int digits = 4;
inline int generate_number(){
    unsigned int return_value = 0;
    srand(time(0));
    std::vector<int> num_list {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::random_shuffle(num_list.begin(), num_list.end());
    for(int i = 0; i < digits; ++i){
        return_value += num_list[i]*pow(10, i);
    }
    return return_value;
}
const int computer_number = generate_number();
string read_number(int user_guess);
int algorithm1(string response, int prev_guess);
void parcel(int* arrptr, int number);


#endif //MAIN_H
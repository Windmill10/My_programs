#include <iostream>
#include <string>

void checkalphanumeric(){
    std::string input;
    int i = 0;

    std::cout << "Enter some stuff" << std::endl;
    std::cin >> input;

    char arr[input.size()];

    for(auto value : input){
        if(std::isalnum(value)){
            arr[i] = value;
            std::cout << value;
            i++;
            
        }
    }
}
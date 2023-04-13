#include <iostream>

int main(){
    size_t i = 0;
    for( ; i < 10; i++){
        std::cout << "test" << std::endl;
    }
    

    size_t j = 0;

    do{
        std::cout << "The current value of j is: " << j << std::endl;
        j++;
    }while(j < 10);
    return 0;
}
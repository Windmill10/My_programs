#include "main.h"

void functions(){
        auto func = [](){
    std::cout << "Hello world!" << std::endl;
    };
    func();

    [](double a, double b){
        cout << "a + b = " << (a+b) << endl;
    }(10.4, 123.4);

    //or with an return type

    cout << [](double a, double b){
        return(a + b);
    }(10.23, 13.52) << endl;
     //no semicolon after lambda definition

    auto result = [](int a, int b)->int{ //explicitly states the return type
        return(a+b);
    }(10, 43);
    cout << "result is: " << result << endl;

    auto func1 = [](int a, int b)->int{
        return a + b;
    }; //remember that parentheses are only necessary if called directly
    
    cout << func1(10, 20) << endl;

}
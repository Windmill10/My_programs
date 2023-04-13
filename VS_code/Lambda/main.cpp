#include "main.h"

/* lambda function signature:
auto variabletype = [capture list] (parameters) -> return type(inplicit){
        function body
};
*/

int main(){
    /*double a = 10.42, b = 12.3214;
    
    auto result = [a, b](double c){ //the capture list allows us to access outer variables
        return (a+b) + c;           //the paremeter allows us to add a constant
    };
    cout << result(5.5) << endl;*/
    int c = 100;

    auto func = [c](){ //capturing by value
        std::cout << "Inner value: " << c << endl;
    };

    for(size_t i = 0; i < 5; i++){
        cout << "Outer value: " << c << endl;
        func();
        c++;
    }   

    cout << endl << endl;

    auto func2 = [&c](){ //capturing by reference, both values will increase
    std::cout << "Inner value: " << c << endl;
    };

    for(size_t i = 0; i < 5; i++){
        cout << "Outer value: " << c << endl;
        func2();
        c++;
    }   


    auto func3 = [=](){ //captures everything by value
        cout << c << endl;
    };

    auto func4 = [&](){ //captures everything by reference
        cout << c++ << endl; 
    };

    func3();
    func4();




}


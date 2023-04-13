#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

const double pi = std::acos(-1);
int main(){
    /*
    double weight = 7.7;
    cout << std::floor(weight) << endl;
    cout << std::ceil(weight) << endl << endl;

    double savings = -7000;
    cout << std::abs(savings) << endl;

    double exponential = std::exp(10);
    cout << exponential << endl;

    double power = std::pow(14, 1.5);
    cout << "power of(14,1.5) is" << power << endl;

    cout << log10(1000) << endl;
    cout << log2(8) << endl;
    */

    cout << "calculating pi with acos" << endl;

    cout << std::sin(pi/6) << endl;

    cout << std::round(2.6) << endl;
    



    int result = (5<4) ? 5 : 4;
    cout << result;
    return 0;      
}
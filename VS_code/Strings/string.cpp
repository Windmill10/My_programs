#include<iostream>
#include<string>

using std::cout;
using std::endl;

void declaring(){
    std::string str1(10, 'j');
    std::string str2("Hello world", 5, 6); //will start from index 6, taking 6 char
    
    cout << str1 << endl;
    cout << str2 << endl;
}






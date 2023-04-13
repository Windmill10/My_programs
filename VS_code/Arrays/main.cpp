#include <iostream>
#include <string>
#include "students.hpp"
using namespace std;


void student::init(string name1, int gpa1, int grade1){
    name = name1;
    gpa = gpa1;
    grade = grade1;
}
void student::get_name(){
    cout << name;
}


int main(){ 
    student student1;
    student1.init("abc", 4, 10);
    student1.get_name();

}
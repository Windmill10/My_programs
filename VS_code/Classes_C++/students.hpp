#include<string>
#include<iostream>

using namespace std;

class student{
private:
    int gpa, grade;
    string name;

public:
    void init(string name, int gpa, int grade);
    void get_name();

};
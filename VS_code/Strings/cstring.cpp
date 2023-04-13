#include <iostream>
#include <cstring> //this will include functions such as strlen()
#include <string>

/*
void checkalphanumeric(); 
void length();
void comparingstr();
int findingchar(); //relatively complicated
void lastfound();
void review();
void copyingstr();
void joiningstr();
*/
using std::cout;
using std::endl;
void length(){
    const char msg1[] = "Just a message";
    const char* msg2 = "Just a message";

    cout << "strlen(msg1): " << std::strlen(msg1) << endl;
    cout << "sizeof(msg2): " << sizeof(msg1) << endl << "sizeof(msg1) would be one bit longer" 
    << "since the null terminator is counted" << endl;
}

void comparingstr(){
    //strncmp is similar, strncmp(str1, str2, size_t count) count is how mnay char to compare
    const char* str1 = "abcd";
    const char* str2 = "abcd";
    if(!(strcmp(str1, str2))){ //returns value 0 if they are the same !=0 = 1
        cout << "They are the same, their value is: " << strcmp(str1, str2);
    }else{
        cout << "They are not the same" << strcmp(str1, str2);
    }
}
int findingchar(){
    const char* str1 = "There are many eeeees in this str";
    char target = 'e';
    const char* result = str1;
    //std::cout << *result << endl;
    int count = 0;
    
    while((result = std::strchr(result, target)) != nullptr){ //if a char isn't found, return nullptr
        result++;
        count++;
    }
    return count;
}

void lastfound(){
    const char* input = "Well this line is simply an input";
    char* last_s = std::strrchr(input, 's'); //returns a pointer to the last value
    std::cout << last_s - input + 1; //arithmatic on address, since char is one bit 
}
void review(){
    const char* input = "Well just to review some functions";
    char target = 'o';
    const char* result = input; //this will point to the first char of input
    int count = 0;
    while((result = std::strchr(result, target)) != nullptr){
        result++;
        count++;
    }
    std::cout << count;
}
void copyingstr(){
    const char* source = "This is the source of copying str";
    char* dest = new char[std::strlen(source) + 1];
    std::strcpy(dest, source);

    std::cout << dest << endl;

}
void joiningstr(){
    std::string str1 = "This is str1 ";
    std::string str2 = "This is str2";
    str1 += str2;
    cout << str1;
}
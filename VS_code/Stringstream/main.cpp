#include"main.h"
#include<sstream>

int wordcount(std::string str);
void separatecommas(std::string str);

int main(){
    cout << wordcount(std::string("Just to test how this functions works")) << endl;

    separatecommas(std::string("Just,,,to,test,how,this,works"));
    
}
int wordcount(std::string str){
    std::stringstream ss(str);
    std::string word;
    int count = 0;
    while(ss >> word){ //stringstream automatically separates blankspaces
        count++;
    }        
    return count;
}

void separatecommas(std::string str){
    std::stringstream ss(str);
    std::string words;
    std::vector<std::string> vec;
    char temp;

    while(ss >> words){
        vec.push_back(words);
        ss >> temp;
    }
    cout << words;
}





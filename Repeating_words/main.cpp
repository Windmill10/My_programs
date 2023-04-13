#define _UNICODE
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include<wchar.h>

using namespace std;


bool rhm_is_greater(const std::pair<wchar_t, int>& lhm, const std::pair<wchar_t, int>& rhm){
    return rhm.second > lhm.second;
}



int main(){
    cout << "準備好了" << endl;
    wstring input = "嗨";
    wchar_t mychar[100];
    //std::wcin >> mychar;
    //cout << mychar;
    //cout << static_cast<char> (input[0]) << static_cast<char> (input[1]); 
    std::unordered_map<wchar_t, int> mymap;
    for(wchar_t value : input){
        if(mymap.find(value) == mymap.end()){
            mymap[value] = 1;
        }else{
            mymap[value]++;
        }
    }
    
    std::vector<std::pair<wchar_t, int>> v(mymap.begin(), mymap.end());
    std::sort(v.begin(), v.end(), rhm_is_greater);
    for(std::pair<wchar_t, int> value : v){
        std::wcout << value.first << ": " << value.second << std::endl;
    }

    return 0;
}
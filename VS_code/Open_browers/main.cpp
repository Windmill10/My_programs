#include<iostream>
#include<vector>
#include<windows.h>
#include<shellapi.h>
using namespace std;
int main(){
    vector<string> url;
    string temp;
    cout << "Receiving input: " << endl;
    while(cin>>temp){
        url.push_back(temp);
    }
    for(auto value : url){
        value = "https://www.codechef.com/problems/" + value;
        ShellExecuteA(0, 0,  value.c_str(), 0 , 0, SW_SHOW);
    }


    //ShellExecuteA(0, 0,  "http://www.google.com", 0 , 0, SW_SHOW);
    //system("<google-chrome> http://google.com");


}
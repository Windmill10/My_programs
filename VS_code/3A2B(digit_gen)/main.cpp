#include"main.h"

using namespace std;

int main(){
    vector<int> sample;
     for(int i = 9876; i >= 1023; --i){
        string str = to_string(i);
        if(str[0] != str[1] && str[0] != str[2] && str[0] != str[3] && str[1] != str[2] && str[1] != str[3] && str[2] != str[3]
        && str[0] != '0' && str[1] != '0' && str[2] != '0' & str[3] != '0'){
            sample.push_back(i);            
        }
        
    }
    for(auto value : sample){
        cout << value << ",";
    }    
    cout << sample.size();
}
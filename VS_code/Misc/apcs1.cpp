#include"main.h"

using std::cin;

void finddiff(){
    long long unsigned int input;
    cin >> input;
    int i = 0, sum1 = 0, sum2 = 0;
    std::vector<int> vec;
    

    while(input > 0){
        vec.push_back(input % 10);
        input/=10;
    }
    int count = 1;
    for(auto ite = vec.begin(); ite != vec.end(); ite++){
        if(count % 2 == 0){
            sum2 = sum2 + *ite;
            //cout << "sum2" << *ite << endl;
        }else{
            sum1 = sum1 + *ite;
            //cout << "sum1 " << *ite << endl;
        }
        count++;
    }
    //cout << sum1 << endl;
    /*
    for(auto ite = vec.begin() + 1; ite != vec.end() - 1; ite+=2){
        sum2 += *ite;
    } */
    int result = sum1 - sum2; 
    cout << abs(result);
}
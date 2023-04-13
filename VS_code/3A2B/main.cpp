#include"main.h"

void generate_number(int* arr, int digits);
void getnumber(int number);
int userinput(int digits, int &user_guess);
std::string readnumber(int user_guess, int digits, int* my_number);


int main(){
    unsigned int digits = 4;
    int mynumber[digits], user_guess;
    int* mynumberptr = &mynumber[0];
    generate_number(mynumberptr, digits);

    cout << endl;
    int times = 0;
    while(times < 5){

    
        userinput(digits, user_guess);

        cout << readnumber(user_guess, digits, mynumberptr) << endl;
        
        cout << "user_guess is: " << user_guess << endl;
        for(auto value : mynumber){
            cout << value;
        }
        cout << endl;
        times++;
    }
    

}


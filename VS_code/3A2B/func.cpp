#include"main.h"

void generate_number(int* arr, int digits){ //function to generate 4 digit numbers (ver 1)
    srand(time(0));
    int list[9];
    for(int i = 1; i <= 9; i++){
        list[i] = i;
    }
    for(int i = 0; i < 10; i++){
        int num1 = rand() % 8 , num2 = rand() % 8 , temp;
        temp = list[num1]; list[num1] = list[num2]; list[num2] = temp;
    }
    for(int i = 0; i < digits; i++){
        arr[i] = list[i];
    }
    arr[0] = (arr[0] == 0) ? list[9] : list[0];

}
void generate_num();


std::string readnumber(int user_guess, int digits, int* my_number){
    int As = 0, Bs = 0;
    int userarr[digits];
    for(int i = digits-1; i >= 0; i++){
        userarr[i] = user_guess % 10;
        user_guess /=10;
    }
    for(int i = 0; i < digits; i++){
        for(int j = 0; j < digits; j++){

        }
    }
    for(auto value : userarr){
        cout << value;
    }
    cout << endl;
    /*user_guess = 1234;
    for(int m = 0; m <= 3; m++){
        *(my_number + m) = m;
    } */
    /*for(int i = digits; i >= 0; i--){
        if(my_number[i] == user_guess % 10){
            cout <<  "for A: " << my_number[i] << " user guessA: " << user_guess % 10 << endl;
            ++As;
        }else{
            for(int j = 0; j < digits; j++){
                if(my_number[j] == user_guess % 10){
                    cout << "for B: " <<  my_number[i] << " user guessB: "<< user_guess %10 << endl;
                    ++Bs;
                }
            }
            
        }
        user_guess /= 10; 

    }
    if(As == digits){
        return "Correct";
    }else{
        cout << As << "A " << Bs << "B";
        return "Not correct";
    } */
    return "Nothing yet";
     
}

void userinput(int digits, int &user_guess){
    int input, digits_of_input;
    cout << "Enter a " << digits << " digit number ";
    cin >> input;
    digits_of_input = int(log10(input) + 1);

    if(digits_of_input > digits){
        cout << "Only " << digits << " digit numbers are allowed \n";
        userinput(digits, user_guess);
    }else{
       user_guess = input;
    }
}

#include"main.h"

int main(){
    srand(time(NULL));
    
    int user_guess = 0;
    string response;
    cout << "computer number is: " << computer_number << endl;
    
    auto get_number = [&user_guess](){
        cout << "Enter a " << digits << " digit number: ";
        cin >> user_guess;
    };

    int current_guess = 0, previous_guess = 0;
    response = " ";
    while(response != "4A0B" && response != "4A"){
        previous_guess = current_guess;
        //if(algorithm1(response, previous_guess) < 0) cout << "stop!";
        cout << "breakpoint 1" << endl;
        cout << "computer gusses: " << algorithm1(response, previous_guess) << endl; // this line is the problem
        cout << "breakpoint 2" << endl;
        current_guess = algorithm1(response, previous_guess); // current guess is 1234
        cout << "breakpoint 3" << endl;
        cin >> response; 
    }
}


    /*while(read_number(user_guess, computer_number) != std::to_string(digits) + "A" + std::to_string(0) + "B"){
        get_number();
        if(cin.fail() || int(log10(user_guess) + 1) != digits){
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! \n";
        }else{
            cout << read_number(user_guess, computer_number) << endl;
        } 
    }*/
    //read_number returns _A_B
    /*int count = 0;
    response = read_number(1234);
    while(read_number(algorithm1(response)) != std::to_string(digits) + "A" + std::to_string(0) + "B"){
        cout << "current guess: " << algorithm1(read_number(algorithm1(response))) << endl;
        cout << "current response: " << read_number(algorithm1(response));
        count++;
        cout << "current count: " << count;
    }*/
    /*cout << "Computer guesses: " << "1234" << endl << "Your response is _A_B?: ";
    cin >> response;
    algorithm1(response); //algorithm returns a guess value */
    //computer first guesses 1234, and user responses 0A1B
    //int temp = algorithm1("0A1B", 1234); // algorithm produces a number based on 
    //cout << "computer gussess 1234" << endl;
    //cin >> response;
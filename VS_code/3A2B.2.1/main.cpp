#include"main.h"

const int digits = 4;

void parcel(int* arrptr, int number){
    for(int i = digits - 1; i >= 0; --i){
        *(arrptr + i) = number % 10;
        number/=10;
    }
}


int generate_number(){
    unsigned int return_value = 0;
    srand(time(0));
    std::vector<int> num_list {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::random_shuffle(num_list.begin(), num_list.end());
    for(int i = 0; i < digits; ++i){
        return_value += num_list[i]*pow(10, i);
    }
    return return_value;
}
const int computer_number = generate_number();

string read_number(int user_guess){ //by default digits is 4
    int guess_arr[digits], computer_number_arr[digits], As = 0, Bs = 0;

    parcel(guess_arr, user_guess);
    parcel(computer_number_arr, computer_number);
    for(int i = 0; i < digits; ++i){
        for(int j = 0; j < digits; ++j){
            if(i == j && guess_arr[i] == computer_number_arr[j]) As++;
            else if(i != j && guess_arr[i] == computer_number_arr[j]) Bs++;
        }
    }
    return std::to_string(As) + "A" + std::to_string(Bs) + "B";
}



int main(){
    cout << computer_number << endl;
    int user_guess = 0;
    auto get_number = [&user_guess](){
        cout << "Enter a " << digits << " digit number: ";
        cin >> user_guess;
    };
    get_number();
    cout << read_number(user_guess);

}
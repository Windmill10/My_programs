#include "main.h"

const int digits = 4;
void parcel(int *arrptr, int number)
{
  for (int i = digits - 1; i >= 0; --i)
  {
    *(arrptr + i) = number % 10;
    number /= 10;
  }
}

int generate_number()
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(0, sample.size() - 1);
  return sample[distrib(gen)];
}

int computer_number = generate_number();

bool check_game_ends(string respond)
{
  int A, B;
  A = respond[0] - '0';
  B = respond[2] - '0';
  return A == 4 ? 1 : 0;
}
string read_number(int user_guess)
{ // by default digits is 4
  int guess_arr[digits], computer_number_arr[digits], As = 0, Bs = 0;

  parcel(guess_arr, user_guess);
  parcel(computer_number_arr, computer_number);
  for (int i = 0; i < digits; ++i)
  {
    for (int j = 0; j < digits; ++j)
    {
      if (i == j && guess_arr[i] == computer_number_arr[j])
        As++;
      else if (i != j && guess_arr[i] == computer_number_arr[j])
        Bs++;
    }
  }
  return std::to_string(As) + "A" + std::to_string(Bs) + "B";
}
int computer_guess(string user_response, int previous_guess)
{
  int A, B, parsed_sample[digits], parsed_previous_guess[digits], countA, countB;
  A = user_response[0] - '0';
  B = user_response[2] - '0';
  for (auto ite = sample.begin(); ite != sample.end(); /* no increment here */)
  {
    countA = 0;
    countB = 0;
    parcel(parsed_sample, *ite);
    parcel(parsed_previous_guess, previous_guess);
    for (int i = 0; i < digits; ++i)
    {
      if (parsed_sample[i] == parsed_previous_guess[i])
      {
        countA++;
        continue;
      }
      for (int j = 0; j < digits; ++j)
      {
        if (parsed_sample[i] == parsed_previous_guess[j])
        {
          countB++;
          break;
        }
      }
    }

    if (countB != B || countA != A)
    {
      ite = sample.erase(ite);
    }
    else
    {
      ++ite;
    }
  }

  auto new_guess = sample.begin() + rand() % sample.size();
  return *new_guess;
}

bool user_starts_first()
{
  string foo;
  cout << "Would user like to start first? (y/n)" << endl;
  cin >> foo;
  return foo == "y" ? 1 : 0;
}
int main()
{
  bool flag = user_starts_first();
  srand(time(0));
  // cout << computer_number << endl;
  int user_guess = 0, rounds = 1, previous_guess;
  string user_response = " ";

  auto get_number = [&user_guess]()
  {
    cout << "Your turn, enter a " << digits << " digit number: ";
    cin >> user_guess;
  };


  if(flag){
    get_number();
    if (read_number(user_guess) == std::to_string(digits) + "A" + std::to_string(0) + "B")
    {
      cout << "You win!";
      return 0;
    }else{
      cout << read_number(user_guess) << endl;

    }
  }
  while (true)
  {
    if(user_response == " "){
      previous_guess = generate_number();
      cout << "I'm going to guess a number first, user please respond by entering ?A?B" << endl;
      cout << previous_guess << endl;
      cout << "user respond: " << endl;
      cin >> user_response;
    }else{
      previous_guess = computer_guess(user_response, previous_guess);
      cout << endl
          << "Now I'm going to guess: " << previous_guess << endl;

      cout << "User please respond eg. 0a1b(a is necessary) " << endl;
      cin >> user_response;
    }
    if(user_response == "4A0B" || check_game_ends(user_response)){
      cout << "Computer wins! My number is :  " << computer_number;
      break;
    }

    get_number();
    
    while (cin.fail() || int(log10(user_guess) + 1) != digits)
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << "Invalid input! Try again \n";
      get_number();
    }

    

    if (read_number(user_guess) == std::to_string(digits) + "A" + std::to_string(0) + "B")
    {
      cout << "You win!";
      break;
    }
    cout << endl << read_number(user_guess) << endl;



  flag = 0;
  }
  // cout << "Computer wins! My number is :  " << computer_number;
}

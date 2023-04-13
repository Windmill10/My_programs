#include"main.h"

using std::cin;
void findingfactors(int num){
	for(size_t i = 1; i <= num/2; i++){
		if(num % i == 0){
			cout << i << " ";
		}
	}
}

void RNG(){
    srand(time(0));
    for(size_t i = 0; i < 10; i++){
        cout << rand() << endl; 
    }
}

void RNG2(){
    srand(time(0));
    unsigned int random = rand(), count, range;
    cout << "How many numbers? \n";
    cin >> count;
    cout << "Enter range \n";
    cin >> range;
    for(size_t i = 0; i < count; i++){
        srand(random);
        random = rand() % range;
        cout << random << endl;
        random = rand();
        
    }
}


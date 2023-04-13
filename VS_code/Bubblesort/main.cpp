#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(int &a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	
	//vector<int> unsorted = {3, 12, 5, 243, 6, 4};
	vector<int> unsorted;
	int size;
	//int size = unsorted.size();
	cout << "Enter number of elements: \n"; cin >> size;
	cout << "Enter integers: "; 

	for(int i = 0; i < size; i++){
		int number;
		cin >> number;
		unsorted.push_back(number);
	}

	for(int i = 0; i < size ; i++){
		for(int j = 0; j < size ; j++){
			if(unsorted[i] < unsorted[j]){
				swap(unsorted[i], unsorted[j]);
			}	
		}
	}

    for(auto ite : unsorted){
        cout << ite << endl;
    }
}
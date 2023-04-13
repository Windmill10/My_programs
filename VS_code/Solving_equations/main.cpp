#include<iostream>
#include<vector>

void solution(std::vector<int>eq1, std::vector<int>eq2);
std::vector<int> vector_processing(std::vector<int> equation);


int main(){
  std::vector<int> input1(3), input2(3);
  std::cout << "a, b, c for ax + by = c starting with the first formula: \n";
  
  input1 = vector_processing(input1);
  std::cout << "Then the second formula: \n";
  
  input2 = vector_processing(input2);
  
  solution(input1, input2);
  
  

  
}
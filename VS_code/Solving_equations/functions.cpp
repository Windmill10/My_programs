#include<iostream>
#include<vector>

void solution(std::vector<int>& eq1, std::vector<int>& eq2){
  int delta, delta_x, delta_y, sol_x, sol_y;
  delta = eq1[0] * eq2[1] - eq1[1] * eq2[0];
  delta_x = eq1[2] * eq2[1] - eq1[1] * eq2[2];
  delta_y = eq1[0] * eq2[2] - eq1[2] * eq2[0];
  if(delta != 0){
    if(delta_x % delta == 0 && delta_y % delta == 0){
    std::cout << "x is: " << delta_x/delta << "\ny is: " << delta_y/delta;
    }else{
      std::cout << "x is: " << delta_x << "/" << delta << "\n";
      std::cout << "y is: " << delta_y << "/" << delta << "\n";
    }
  }else if(delta == 0){
    if(delta_y == 0 && delta_x == 0){
      std::cout << "There are infinite possible solutions";
      
    }else{
      std::cout << "Does not exist";
    }
  }
}
std::vector<int> vector_processing(std::vector<int> equation){
  int num1;
  for(int x : equation){
    equation.erase(equation.begin());
    std::cin >> num1;
    equation.push_back(num1);
  }
  return equation;
  
}
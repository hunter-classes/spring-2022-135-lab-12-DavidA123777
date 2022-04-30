#include <iostream>
#include <string>
#include <vector>
#include "funcs.h"

int main(){
std::cout << "\nTask A: create a vector with a size of 5 and display elements 0-4\n";
std::vector<int> a = makeVector(5);
for (int i = 0; i < a.size(); i++){
  std::cout << a[i] << std::endl;
}
std::cout << "\nTask B: create a vector that contains only the positive elements of the vector inputted: {1,2,-1,3,4,-1,6}\n";

const std::vector<int> v{1,2,-1,3,4,-1,6};
std::vector<int> b;
b = goodVibes(v);
for (int i = 0; i < b.size(); i++){
  std::cout << b[i] << std::endl;
}
std::cout << "\nTask C: Takes input from 2 vectors v1{1,2,3} and v2{4,5} and appends the elements from v2 to the end of v1 while removing them from v2 so v2 is an empty vector and v1 contains all of the elements of both vectors \n";

std::vector<int> v1{1,2,3};
std::vector<int> v2{4,5};

gogeta(v1, v2);
for (int i = 0; i < v1.size(); i++)
{
  std::cout << v1[i] << std::endl;
}



std::cout << "\nTask D: Takes input from 2 vectors v3{1,2,3} and v4{4,5} and adds up the total of each index value of both vectors and appends them to a new vector so the new vector has elements [5, 7, 3]\n";



const std::vector<int> v3{1,2,3};
const std::vector<int> v4{4,5};

std::vector<int> c = sumPairWise(v3, v4);
for (int i = 0; i < c.size(); i++){
  std::cout << c[i] << std::endl;
}

  return 0;
}

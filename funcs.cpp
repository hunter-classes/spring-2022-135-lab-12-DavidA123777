#include <iostream>
#include <string>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){
  std::vector<int> total;
  for (int i = 0; i < n; i++){
    total.push_back(i);
  }
  //appends values from 0 to inputted value -1 to a new vector
  return total;
}

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> a;
  for (int i = 0; i < v.size(); i++){
    if (v[i] >= 0){
      a.push_back(v[i]);
    }
//append to a new vector only the positive elements of the vector inputted
  }
  return a;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for(int i = 0; i < vegeta.size(); i++){
    goku.push_back(vegeta[i]);
  }
  //appends to the end of vector 1 the contents of vector 2
  int count = vegeta.size();
  for(int j = 0; j < count; j++){
    vegeta.pop_back();
  //removes the contents of vector 2
  }
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
   std::vector<int> b;
   for (int i = 0; i < v1.size(); i++){
     b.push_back(v1[i]);
   }
   std::vector<int> c;
   for (int i = 0; i < v2.size(); i++){
     c.push_back(v2[i]);
   }
  //copy vectors v1 and v2 to vectors b and c respectively


  int count = 0;
  std::vector<int> a;

  int larger = v1.size();
  if (larger <= v2.size()){
    larger = v2.size();
  }//sets the size of the new vector to the greatest of the two vectors

  if (v1.size() < v2.size()){
    for (int i = v1.size(); i < v2.size(); i++){
      b.push_back(0);
    }
  }

//append 0 to vector b if vector b is smaller than vector 2
  if (v2.size() < v1.size()){
    for (int i = v2.size(); i < v1.size(); i++){
      c.push_back(0);
    }
  }
//append 0 to vector c if vector c is smaller than vector 1



  for(int i = 0; i < larger; i++){
    count = b[i] + c[i];
    a.push_back(count);
  }
  //append the sum of the pairwise values of both vectors b and c to vector a
  return a;
}

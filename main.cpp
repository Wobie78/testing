#include <iostream>
#include <vector>
using namespace std;

int main(){
  std::vector<int>vec;
  vec.push_back(10);
  vec[0] = 5;
  cout << vec[0];
}
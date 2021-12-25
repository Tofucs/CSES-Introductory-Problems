#include <iostream>
#include <string>

int n;

int solve(const int &n){
  int steps = 0;
  int x[n];
  for (int i = 0; i < n; i++) {
    std::cin >> x[i];
  }
  
  for (int i = 1; i < n; i++) {
    steps += std::max(0, x[i-1] - x[i]);
    x[i] += std::max(0, x[i-1] - x[i]);
  }
  return steps;
}

int main()
{
  std::cin >> n;
  std::cout << solve(n); 
}

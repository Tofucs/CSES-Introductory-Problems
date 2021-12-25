#include <iostream>
#include <string>

int n;
long long int zero = 0;

long long int solve(const int &n){
  long long int steps = 0;
  long long int x[n];
  for (int i = 0; i < n; i++) {
    std::cin >> x[i];
  }
  
  for (int i = 1; i < n; i++) {
    steps += std::max(zero, x[i-1] - x[i]);
    x[i] += std::max(zero, x[i-1] - x[i]);
  }
  return steps;
}

int main()
{
  std::cin >> n;
  std::cout << solve(n); 
}

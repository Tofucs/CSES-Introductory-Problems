
#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;
  if (n < 4) 
    std::cout << "NO SOLUTION";
  else if (n == 4)
    std::cout << "2 4 1 3\n";
  else {
    for (int i = 1; i <= n; i += 2)
      std::cout << i << " ";
    for (int i = 2; i <= n; i += 2)
      std::cout << i << " ";
  }
  
}

#include <iostream>
#include <string>
#define li long int

int main() {
  int t;
  li x, y;
  std::cin >> t;
  while (t--) {
    std::cin >> y >> x;
    if (x > y) {
      if (x % 2 == 1) {
        std::cout << (x*x) - y + 1;
      }
      else {
        std::cout << ((x-1)*(x-1)) + y;
      }
    }
    else {
      if (y % 2 == 0) {
        std::cout << (y*y) - x + 1;
      }
      else {
        std::cout << ((y-1)*(y-1)) + x;
      }
    }
  }
  
}

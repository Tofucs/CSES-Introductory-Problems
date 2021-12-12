#include <iostream>

int main() {
  std::string line;
  std::getline(std::cin >> std::ws, line);
  std::string previousChar;
  int sum = 0;
  int currentsum = 1;
  for (int i = 1; i<line.length(); i++) {
    previousChar = line.substr(i-1, 1);
    if (previousChar == line.substr(i, 1)) {
      currentsum += 1;
    } else {
      currentsum = 1;
    }
    if (currentsum > sum) {
      sum = currentsum;
    }
  }
  std::cout << sum;
}

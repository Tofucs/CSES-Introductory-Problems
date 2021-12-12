#include <iostream>
#include <numeric>
#include <vector>
 
int main() {
    long n = 0; 
    std::cin >> n;
    std::vector<long> nums;
    long triSum = (n*(n+1))/2;
    long input;
    long sum = 0;
 
    for (int i = 0; i<n-1; i++) {
        std::cin >> input;
        nums.push_back(input);
        sum += nums[i];
    }
    
    std::cout << triSum-sum;
}

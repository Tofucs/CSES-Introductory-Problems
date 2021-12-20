#include <iostream>

using namespace std;

//using a recursive function
using ll = long long;
int n;
int apples[20];

//both sets of apples start at weight zero
//first appple add to any weight
//after that, add the apple weight to whichever set has the least weight
//return the difference of the final sums


ll minDifference(int i, ll set1Sum, ll set2Sum) {
  if (i == n) {
    return abs(set1Sum-set2Sum);
  }
  return min(minDifference(i + 1, set1Sum, set2Sum + apples[i]), minDifference(i + 1, set1Sum + apples[i], set2Sum));
}


int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> apples[i];
  }
  cout << minDifference(0, 0, 0);   //both sets start at zero
  
}

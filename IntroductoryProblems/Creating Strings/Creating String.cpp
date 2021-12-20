#include <iostream>
#include <vector>

using namespace std;

string input;
using vs = vector<string>;
int chars[26];
vs permutations;

                    //conditions for these permutations - lexigraphical order
void findPermutations(string current) {
  if (current.length() == input.length()) {
    permutations.push_back(current);
  }
  else {
    for (int i = 0; i < 26; i++) {
      if (chars[i] > 0) {
        chars[i]--;
        findPermutations(current + (char)('a' + i));
        chars[i]++;
      }
    }
  }
}

int main() {
  cin >> input;
  for (char c : input) {
    chars[c - 'a']++; //so fing handy. offsets the acsii code by -65 to give us index in a char[26] lmao
  }
  findPermutations("");
  cout << permutations.size() << endl;
  for (int i = 0; i < permutations.size(); i++) {
    cout << permutations[i] << endl;
  }
}

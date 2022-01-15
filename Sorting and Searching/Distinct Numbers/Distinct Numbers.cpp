#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define vi vector<int>

vi nums;
int n;
int num;
int ans = 1;

bool comp (int x, int y) {
    return x < y;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end(), comp);
    for (int i = 1; i < (int)nums.size(); i++) {
        if (nums[i] != nums[i-1]) {
            ans++;
        }
    }
    cout << ans;
}

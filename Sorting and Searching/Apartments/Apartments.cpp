// CSES Apartments
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll; 

//gready algorithm
int main() {
    int n, m; 
    ll k;
    cin >> n >> m >> k;
    ll desired[n];
    ll available[m];
    for (int i = 0; i < n; i++) {
        cin >> desired[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> available[i];
    }
    
    sort(desired, desired+n);
    sort(available, available+m);
    
    int ans = 0;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if (abs(desired[i] - available[j]) <= k) {
            i++;
            j++;
            ans++;
        }
        else {
            if (desired[i] - available[j] > k) {
                j++;
            }
            else {
                i++;
            }
            
        }
    }
    
    cout << ans << endl;
}

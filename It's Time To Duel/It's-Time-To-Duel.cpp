#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
 
        bool all_one = true;
        bool adj_zero = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) all_one = false;
            if (i > 0 && a[i] == 0 && a[i-1] == 0) {
                adj_zero = true;
                break;
            }
        }
        cout << (adj_zero || all_one ? "YES\n" : "NO\n");
    }
    return 0;
}
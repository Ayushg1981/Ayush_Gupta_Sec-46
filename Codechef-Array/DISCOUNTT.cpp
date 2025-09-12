#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        
        int total_without_coupon = 0;
        int total_with_coupon = X;

        for (int i = 0; i < N; ++i) {
            total_without_coupon += A[i];
            total_with_coupon += max(0, A[i] - Y);
        }

        if (total_with_coupon < total_without_coupon)
            cout << "COUPON\n";
        else
            cout << "NO COUPON\n";
    }
    return 0;
}
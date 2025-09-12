#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_set<int> seen;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            seen.insert(A[i]);
        }

        int first = -1, second = -1;

        for (int num : seen) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second) {
                second = num;
            }
        }

        cout << first + second << endl;
    }

    return 0;
}

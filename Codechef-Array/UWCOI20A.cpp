#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T; // number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> heights(N);
        for (int i = 0; i < N; i++) {
            cin >> heights[i];
        }

        // Find maximum height
        int maxHeight = *max_element(heights.begin(), heights.end());
        cout << maxHeight << endl;
    }

}

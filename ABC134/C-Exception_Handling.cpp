// https://atcoder.jp/contests/abc134/tasks/abc134_c

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define print(x) cout << x << endl;

int main() {
    int N; cin >> N;
    // int A[N]; rep(i, N) cin >> A[i];
    // vector<int> B(A, A+N);
    vector<int> A(N); rep(i, N) cin >> A[i];
    vector<int> B(N); rep(i, N) B[i] = A[i];

    sort(B.rbegin(), B.rend());
    // reverse(B.begin(), B.end());

    // rep(i, B.size()) cout << B[i] << " ";
    // cout << endl;

    rep (i, N) {
        if (A[i] == B[0]) {
            cout << B[1];
        } else {
            cout << B[0];
        }
        cout << endl;
    }

    return 0;
}
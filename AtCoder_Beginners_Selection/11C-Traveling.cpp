// https://atcoder.jp/contests/abs/tasks/arc089_a

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, a, n) for (int i = a; i <= n; i++)

int main(void) {
    int N; cin >> N;
    vector<int> t(N+1), x(N+1), y(N+1);

    t[0] = x[0] = y[0] = 0;
    repr(i, 1, N) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool can_travel = true;
    rep(i, N) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);

        if (dist > dt ) can_travel = false;
        if ((x[i+1] + y[i+1]) % 2 == (x[i] + y[i]) % 2) {
            if (dt%2 != 0) can_travel = false;
        } else {
            if (dt%2 != 1) can_travel = false;
        }
    }

    if (can_travel) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
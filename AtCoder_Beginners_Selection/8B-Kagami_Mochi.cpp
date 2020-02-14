// https://atcoder.jp/contests/abs/tasks/abc085_b

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
    int N;
    cin >> N;

    vector<int> d(N);
    rep(i, N) {
        cin >> d[i];
    }

    sort(d.rbegin(), d.rend()); // 降順ソート

    int ans = 0;
    rep(i, N-1) {
        if (d[i] != d[i+1]) {
            ans++;
        }
    } // end for

    cout << ++ans << endl;

    return 0;
}
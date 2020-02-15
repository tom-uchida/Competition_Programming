// https://atcoder.jp/contests/abs/tasks/abc088_b

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
    int N;
    cin >> N;

    vector<int> a(N);
    rep(i, N) {
        cin >> a[i];
    }

    // sort(a.rbegin(), a.rend()); // 降順ソート
    reverse(a.begin(), a.end()); // 降順ソート

    int alice = 0, bob = 0;
    rep(i, N) {
        if (i%2==0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    } // end for

    cout << alice - bob << endl;

    return 0;
}
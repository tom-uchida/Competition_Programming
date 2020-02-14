// https://atcoder.jp/contests/abs/tasks/abc087_b

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;
    rep(i, a+1) {
        rep(j, b+1) {
            rep(k, c+1) {
                if (i*500 + j*100 + k*50 == x) {
                    ans++;
                }
            } // end for
        } // end for
    } // end for

    cout << ans << endl;

    return 0;
}
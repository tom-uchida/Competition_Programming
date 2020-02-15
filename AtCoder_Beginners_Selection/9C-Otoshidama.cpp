// https://atcoder.jp/contests/abs/tasks/abc085_c

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    bool is_lie = true;

    rep(i, N+1) {
        rep(j, N-i+1) {
            if (10000*i + 5000*j + 1000*(N-i-j) == Y) {
                x = i; y = j; z = N-i-j;
                is_lie = false;
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
// https://atcoder.jp/contests/abs/tasks/abc083_b

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int calc_digit_sum(int n) {
    int ans = 0;
    while (n > 0) {
        ans += n%10;
        n /= 10;
    }

    return ans;
}

int main(void) {
    int N, a, b;
    cin >> N >> a >> b;

    int ans = 0;
    for (int i = 1; i < N+1; i++) {
        int ds = calc_digit_sum(i);
        if (a <= ds && ds <= b) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}
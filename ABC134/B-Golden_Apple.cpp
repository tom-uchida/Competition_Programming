// https://atcoder.jp/contests/abc134/tasks/abc134_b

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, D; cin >> N >> D;
    
    int ans = 0;
    if ( N % (2*D+1) == 0) {
        ans = N / (2*D+1);
    } else {
        ans = N / (2*D+1) + 1;
    }

    cout << ans << endl;

    return 0;
}
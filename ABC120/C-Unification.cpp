// https://atcoder.jp/contests/abc120/tasks/abc120_c

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string S; cin >> S;
    
    int N = S.length();
    int count0 = 0, count1 = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '0') {
            count0++;
        }

        if (S[i] == '1') {
            count1++;
        }
    }

    int diff = abs(count0 - count1);
    int ans = N - diff;

    cout << ans << endl;

    return 0;
}
// https://atcoder.jp/contests/abc106/tasks

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;

    int cnt;
    int result = 0;
    for (int i = 1; i <= N; i++) {
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (N%j == 0) {
                cnt++;
            }
        }

        if (cnt == 8) result++;
    }

    cout << result << endl;

    return 0;
}
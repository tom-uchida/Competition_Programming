// https://atcoder.jp/contests/abc106/tasks

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;

    int cnt;
    int answer = 0;
    for (int i = 1; i <= N; i+=2) {
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i%j == 0) {
                cnt++;
            }
        }

        if (cnt == 8) answer++;
    }

    cout << answer << "\n";

    return 0;
}
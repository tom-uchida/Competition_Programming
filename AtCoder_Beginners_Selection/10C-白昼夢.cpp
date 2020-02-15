// https://atcoder.jp/contests/abs/tasks/arc065_a

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
    string str[] = {"dream", "dreamer", "erase", "eraser"};
    vector<string> pattern(4);
    rep(i, 4) pattern[i] = str[i];
    string S; cin >> S;

    // 入力文字列の反転
    reverse(S.begin(), S.end());
    
    // 4種類の文字列の反転
    rep(i, 4) reverse(pattern[i].begin(),pattern[i].end());

    bool divide_all = true;
    for (int i = 0; i < S.length(); ) {
        bool found_pattern = false;
        rep(j, 4) {
            int len = pattern[j].size();
            if (S.substr(i, len) == pattern[j]) {
                found_pattern = true;
                i += len;
                break;
            }
        }

        if (!found_pattern) {
            divide_all = false;
            break;
        }
    }

    if (divide_all) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
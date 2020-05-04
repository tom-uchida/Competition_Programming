#include <bits/stdc++.h>
using namespace std;

int main() {
    // 変数宣言
    pair<int, int> p = make_pair(1, 2);

    // 要素へのアクセス
    cout << p.first << endl; // 1
    cout << p.second << endl; // 2

    // 変数宣言
    pair<int, string> p2 = make_pair(1, "No.1");

    // 要素へのアクセス
    cout << p2.first << endl; // 1
    cout << p2.second << endl; // "No.1"

    return 0;
}
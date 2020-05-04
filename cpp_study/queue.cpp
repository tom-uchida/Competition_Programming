#include <bits/stdc++.h>
using namespace std;

int main() {
    // 変数宣言
    queue<int> q;

    // queueに1→2→-1の順に要素を挿入
    q.push(1); q.push(2); q.push(-1);

    // 現在キューに入っている要素の数
    cout << q.size() << endl; // 3

    // 先頭の要素を参照する
    cout << q.front() << endl; // 1

    // 末尾の要素を参照する
    cout << q.back() << endl; // -1

    // 先頭の要素を取り出す
    q.pop();

    // 要素数が1減り，topが参照する要素も変わる
    cout << q.size() << endl; // 2
    cout << q.front() << endl; // 2

    return 0;
}
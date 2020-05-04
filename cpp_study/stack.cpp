#include <bits/stdc++.h>
using namespace std;

int main() {
    // 変数宣言
    stack<int> st;

    // stackに1→2→-1の順に要素を挿入
    st.push(1); st.push(2); st.push(-1);

    // 現在スタックに入っている要素の数
    cout << st.size() << endl; // 3

    // 先頭の要素を参照する
    cout << st.top() << endl; // -1

    // 先頭の要素を取り出す
    st.pop();

    // 要素数が1減り，topが参照する要素も変わる
    cout << st.size() << endl; // 2
    cout << st.top() << endl; // 2

    return 0;
}
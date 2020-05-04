#include <bits/stdc++.h>
using namespace std;

int main() {
    // 3要素のtupleを作る
    tuple<int, int, string> t1 = make_tuple(1, 3, "first");
    tuple<int, int, string> t2 = make_tuple(2, 3, "second");
    tuple<int, int, string> t3 = make_tuple(2, 4, "third");

    // 0番目の要素を取得する
    int& i = get<0>(t1);
    cout << i << endl; // 1

    // 大小比較は0番目の要素→1番目の要素→2番めの要素...の順番に行われる
    // 第0要素について，t1 < t2であるためtrue
    if (t1 < t2) cout << "t1 < t2" << endl; // true
    // 第0要素は等しいが，第1要素について，t2 < t3であるためtrue
    if (t2 < t3) cout << "t2 < t3" << endl; // true

    return 0;
}
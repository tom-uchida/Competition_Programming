#include <bits/stdc++.h>
using namespace std;

int main() {
    // 変数宣言(空集合)
    set<int> s;
    cout << s.empty() << endl; // 1(TRUE)

    // 変数宣言と同時に初期化
    set<int> ss{3,1,4,5};
    cout << ss.size() << endl; // 4

    // 要素を追加
    s.insert(3); s.insert(1); s.insert(5);
    cout << s.size() << endl; // 3
    s.insert(1);
    cout << s.size() << endl; // 3(要素は重複しない)

    // 各要素へのアクセス
    for (auto i = s.begin(); i != s.end(); i++) cout << *i << endl; // 1 3 5

    // 要素の削除
    s.erase(3);
    cout << s.size() << endl; // 2
    s.erase(100); // 元から無い要素をeraseしても変化はない(エラーも出ない)
    cout << s.size() << endl; // 2

    s.insert(3);

    // 要素の検索
    auto itr = s.find(3);
    cout << *itr << endl; // 3
    // 要素が見つからない場合はitr == s.end()
    itr = s.find(99);
    int a;
    a = itr == s.end() ? 1 : 0;
    cout << a << endl; // 1
    
    // 集合の要素をすべて削除
    s.clear();

    return 0;
}
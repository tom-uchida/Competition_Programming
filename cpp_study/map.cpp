#include <bits/stdc++.h>
using namespace std;

int main() {
    // 変数宣言
    map<string, int> m;

    // キー(Jan)と対応する値(1)を登録
    m["Jan"] = 1;

    // mapに登録されている要素数を確認する
    cout << m.size() << endl; // 1

    // 未登録のキーを参照すると0が返ってくる
    cout << m["Feb"] << endl; // 0

    // 未登録のキーを参照した場合も，要素数が1増える
    // m["Feb"] = 0; と登録した場合と同じ状態になる
    cout << m.size() << endl; // 2

    // キーを検索しイテレータを返す
    auto itr1 = m.find("Jan"); // 見つかる
    auto itr2 = m.find("Dec"); // 見つからない
    if (itr1 != m.end()) cout << "Find Jan" << endl;
    if (itr2 != m.end()) cout << "Not find Dec" << endl;

    // count()でキーが登録されているかどうかを判定
    if (m.count("Jan") > 0) cout << "Find Jan" << endl;

    // at()でも要素を検索できるが，未登録の場合はエラーとなる
    cout << m.at("Jan") << endl; // 1

    // 要素の全走査
    for (auto itr = m.begin(); itr != m.end(); ++itr) {
        // first:key, second:value
        cout << itr->first << " " << itr->second << endl;
    }

    // mapはソートされているのでlower_boundが使える
    map<int, string> m2;
    m2[1] = "One"; m2[2] = "Two"; m2[3] = "Three";
    auto itr = m2.lower_bound(2);
    cout << itr->first << "." << itr->second << endl; // 2.Two

    // 要素を全削除
    m.clear();
    cout << m.size() << endl; // 0

    return 0;
}
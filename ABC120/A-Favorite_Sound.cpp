// https://atcoder.jp/contests/abc120/tasks/abc120_a

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    cout << min(b/a, c) << endl;

    return 0;
}
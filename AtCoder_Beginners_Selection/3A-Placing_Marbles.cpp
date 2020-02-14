// https://atcoder.jp/contests/abs/tasks/abc081_a

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    cout << count(s.begin(), s.end(), '1') << endl;

    return 0;
}
// https://atcoder.jp/contests/abc106/tasks

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B; cin >> A >> B;

    cout << A * B - (A + B - 1) << endl;

    return 0;
}
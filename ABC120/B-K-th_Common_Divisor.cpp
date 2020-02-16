// https://atcoder.jp/contests/abc120/tasks

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> calc_common_divisor(int n) {
    vector<int> common_divisors;

    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            common_divisors.push_back(i);
        }
    }

    return common_divisors;
}

int main() {
    int a, b, k; cin >> a >> b >> k;

    vector<int> a_divs = calc_common_divisor(a);
    vector<int> b_divs = calc_common_divisor(b);

    vector<int> common_divs;
    for (int i = 0; i < a_divs.size(); i++) {
        for (int j = 0; j < b_divs.size(); j++) {
            if (a_divs[i] == b_divs[j]) {
                common_divs.push_back(a_divs[i]);
            }
        }
    }

    reverse(common_divs.begin(), common_divs.end());
    cout << common_divs[k-1] << endl;

    return 0;
}
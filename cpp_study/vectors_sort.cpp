#include <bits/stdc++.h>
#define rep(i,cc,n) for (int i = cc; i <= n; ++i)
#define vecprint(v) rep(i, 0, v.size()-1) cout << v[i] << " "; cout << endl;
using namespace std;

void sort2vectors(vector<int> &av, vector<int> &bv) {
    int n = av.size();
    vector<int> p(n), av2(n), bv2(n);
    iota(p.begin(), p.end(), 0);
    sort(p.begin(), p.end(), [&](int a, int b) {return av[a] < av[b]; });
    for (int i = 0; i < n; i++) {
        av2[i] = av[p[i]];
        bv2[i] = bv[p[i]];
    }
    av = av2;
    bv = bv2;
}

int main() {
    vector<int> a = {1,3,2,4,5};
    vector<int> b = {10,4,7,6,5};

    // aを基準にa,bを昇順ソート
    sort2vectors(a, b);
    vecprint(a); //  1 2 3 4 5
    vecprint(b); // 10 7 4 6 5

    // bを基準にa,bを昇順ソート
    sort2vectors(b, a);
    vecprint(a); // 3 5 4 2 1
    vecprint(b); // 4 5 6 7 10

    return 0;
}
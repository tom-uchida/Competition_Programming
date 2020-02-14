// https://atcoder.jp/contests/abs/tasks/abc081_a

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    
    // Get input
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    while(true) {
        bool is_all_even = true;

        for (int i = 0; i < N; i++) {
            if (A[i]%2 == 0) {
                A[i] /= 2;
                
            } else {
                is_all_even = false;
                break;
            }
        } // end for

        if (is_all_even) {
            ans++;
        } else {
            break;
        } // end if

    } // end while

    cout << ans << endl;

    return 0;
}
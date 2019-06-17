#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> S(n);
    rep(i, 0, n-1)
        cin >> S[i];

    for (int i = 0; i < n; i++) {
        if (S[i] == 0) {
            cout << n << endl;
            return 0;
        }
    }

    int len = 0;
    ll mp = 1;
    int r = 0;

    for (int l = 0; l <= n-1; ++l) {
        while (r < n && mp * S[r] <= k) {
            mp *= S[r];
            ++r;
        }
        len = max(len, r-l);
        if (l == r) ++r;
        else mp /= S[l];
    }

    cout << len << endl;
}
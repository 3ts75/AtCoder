#include <bits/stdc++.h>
using namespace std;

#define rep(i, n, m) for (int i = n; i <= m; i++)

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> L(n);
    rep(i, 0, L.size()-1) cin >> L[i];
    int ans = 0, sum = 0;
    rep(i, 0, L.size()-1) {
        sum += L[i];
        if (sum <= x)
            ans++;
    }
    cout << ans+1 << endl;
}
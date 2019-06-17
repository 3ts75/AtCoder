#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define rep(i, n, m) for (int i = n; i <= m; i++)

int main() {
    vector<string> C(3);
    rep(i, 0, 2) cin >> C[i];

    int i = 0;
    do {
        int j = C[i].front() - 'a';
        C[i].erase(C[i].begin());
        i = j;
        if (C[i].empty()) {
            break;
        }
    } while (true);

    switch (i) {
        case 0:
            cout << 'A' << endl;
            return 0;
        case 1:
            cout << 'B' << endl;
            return 0;
        case 2:
            cout << 'C' << endl;
            return 0;
    }
}
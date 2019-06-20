#include <iostream>
#include <vector>
using namespace std;

#define rep(i, n, m) for (int i = n; i <= m; i++)

typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<ll> A(n);
	rep(i, 0, n-1) cin >> A[i];

	int cont = 0;
	rep(i, 0, n-1) {
		while (A[i] % 2 == 0) {
			cont++;
			A[i] /= 2;
		}
	}
	cout << cont << endl;
}
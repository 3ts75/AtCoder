#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> d(n);

	for (int i = 0; i < n; i++) cin >> d[i];

	sort(d.begin(), d.end());

	int l = floor(n / 2) -1, r = floor(n / 2);

	cout << d[r] - d[l] << endl;
}
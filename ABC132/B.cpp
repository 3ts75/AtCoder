#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) cin >>p[i];

	int cont = 0;
	for (int i = 1; i < p.size()-1; i++) {
		if ((p[i-1] < p[i] && p[i] < p[i+1]) || (p[i-1] > p[i] && p[i] > p[i+1]))
			cont++;
	}
	cout << cont << endl;
}
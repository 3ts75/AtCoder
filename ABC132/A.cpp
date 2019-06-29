#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cont = 0;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == s[i+1])
			cont++;
	}

	cout << (cont == 2 ? "Yes" : "No") << endl;
}
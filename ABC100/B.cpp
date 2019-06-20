#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int d, n;
  cin >> d >> n;
  if (d == 0) {
  	if (n == 100) {
  		cout << n+1 << endl;
  		return 0;
  	}
    cout << n << endl;
    return 0;
  }

  if (n == 100) {
  	cout << n * pow(100, d) + 1 << endl;
  } else {
  	cout << n * pow(100, d) << endl;
  }
}
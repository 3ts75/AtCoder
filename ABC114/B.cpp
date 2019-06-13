#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int ans = INT_MAX;  //numeric_limits<int>::max();
    string s;
	cin >> s;
	vector<int> v;
    for (int i = 0; i <= s.size()-3; i++) {
        ans = min(ans, abs(753 - ((s[i]-'0')*100 + (s[i+1]-'0')*10 + (s[i+2]-'0'))));
    }
    cout << ans << endl;
}
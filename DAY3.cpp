#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 0, y = 0;
	string s;
	if (!(cin >> s)) return 0;
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == 'z') ++y;
		if (s[i] == 'o') ++x;
	}
	if (x == 2 * y) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}


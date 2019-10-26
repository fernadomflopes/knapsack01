#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s = "12345";

	reverse(s.begin(), s.end());
	cout << s << endl;

	return 0;
}

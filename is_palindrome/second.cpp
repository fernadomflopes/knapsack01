#include <iostream>
#include <algorithm>

using namespace std;

bool is_palindrome(const string s) {
	string t = s;
	reverse(begin(t), end(t));
	return t == s;
}

int main() {
	
	cout << is_palindrome("abc") << endl << is_palindrome("ana") << endl;

	return 0;
}

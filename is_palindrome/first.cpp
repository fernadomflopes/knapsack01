#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool is_palindrome(const string s1) {
	bool flag = true;
	stack<char> stk;

	for(auto c: s1)
		stk.push(c);

	for_each(begin(s1), end(s1), [&stk, &flag](char ch){
		if(stk.top() != ch){
			flag = false;
			return;
		}
		stk.pop();	
	});
	return flag;	
}

int main() {
	
	cout << is_palindrome("abcdefg") << endl << is_palindrome("ana") << endl;

	return 0;
}

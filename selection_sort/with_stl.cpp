#include <iostream>
#include <algorithm>

using namespace std;

string selection(string s) {
	string str = s;
	for(int i = 0; i < str.size(); i++) {	
		int mx = max_element(begin(str) + i, end(str)) - begin(str);
		swap(str[i], str[mx]);	
	}

	return str;
}

int main() {
	string s = "zadsadaaabbbczkklx";
	selection(s);	
	
	return 0;
}

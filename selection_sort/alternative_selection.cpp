#include <iostream>
#include <algorithm>

using namespace std;

void selection(string &str, int b, int e) {
	if(e < b)
		return;

	int mx = max_element(begin(str) + b, end(str) - b) - begin(str);
	swap(str[b], str[mx]);	
	
	int mn = min_element(begin(str) + b, end(str) - b) - begin(str);
	swap(str[e], str[mn]);	

	selection(str, b + 1, e - 1);
}

int main() {
	string s = "zadsadaaabbbczkklx";
	selection(s, 0, s.size() - 1);	
	cout << s << endl;	
	return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

void selection(string &str) {

	for(int i = 0; i < str.size(); i++) {	
		int mx = max_element(begin(str) + i, end(str)) - begin(str);
		swap(str[i], str[mx]);	
	}

	cout << str << endl;

}

int main() {
	string s = "zadsadaaabbbczkklx";
	selection(s);	
	return 0;
}

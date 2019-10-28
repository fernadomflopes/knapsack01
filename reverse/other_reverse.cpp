#include <iostream>

using namespace std;

string rev(string &s) {
	string out = "";
	for(auto c: s){
		out = c + out;
	}
	return out;
}


int main() {
	string s = "ola mundo";

	cout << rev(s) << endl;
}

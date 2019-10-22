#include <iostream>

using namespace std;

int matching(const string& p, const string& t) {
	int j;
	int szp = p.size();
	int szt = t.size();

	for(int i = 0; i < szt; i++) {
		j = 0;
		while(j < szp && t[i + j] == p[j])
			j++;
		if(j == szp)
			return i;
	} 
	return -1;
}

int main() {
	
	string text = "abababba";
	string pattern = "bba";

	cout << matching(pattern, text) << endl;

	return 0;
}

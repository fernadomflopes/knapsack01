#include <iostream>

using namespace std;

void rev(string &s, int begin, int end) {
	if(end < begin)
		return;
	swap(s[begin], s[end]);
	rev(s, begin + 1, end - 1);
}


int main() {

	string st = "12345";
	rev(st, 0, st.size() - 1);
	cout << st << endl;
	return 0;
}

#include <iostream>

using namespace std;

void selection(string &str){
	for(int j = 0; j < str.size(); j++) {	
		int index_min = j;
		for(int i = j + 1; i < str.size(); i++) {
			if(str[i] < str[index_min]) {
				index_min = i;		
			}
			swap(str[j], str[index_min]);
		}
	}
}

int main() {
	string s = "zzbaabcbacbacbacba";
	selection(s);

	cout << s << endl;
	
	return 0;
}

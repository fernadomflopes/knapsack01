#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<pair<int, int>> twoSum(vector<int> arr, int S) {
    vector<pair<int, int> > sums;
    map<int, int> table;

    for(int i = 0; i < arr.size(); i++) {
        int sumMinusElement = S - arr[i];
        if(table.count(sumMinusElement)) {
            sums.push_back({arr[i], sumMinusElement});
        }
        table[arr[i]] = arr[i];
    }

    return sums;
}


int main() {
    
    int s, n, aux;
    vector<int> numbers;

    cin >> n >> s;
    while(cin >> aux) {
        numbers.push_back(aux);
    }

    auto ret = twoSum(numbers, s);
    for(auto it = ret.begin(); it != ret.end(); ++it) {
        cout << it->first << " " << it->second << endl; 
    } 

    return 0;
}

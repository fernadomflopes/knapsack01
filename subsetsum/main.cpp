#include <iostream>
#include <vector>

using namespace std;


bool sss(vector<int> v, int sum) {
    vector<vector<int> > pd(v.size() + 1, vector<int>(sum + 1, 0));

    for(int i = 0; i <= (int)v.size(); i++) 
        pd[i][0] = 1;
    

    for(int i = 1; i <= (int)v.size(); i++) {
        for(int j = 1; j <= sum; j++) {
            if(j < v[i-1]) {
                pd[i][j] = pd[i-1][j];
            } else {
               pd[i][j] = pd[i-1][j] || pd[i-1][j-v[i-1]];
            }
        } 
    } 
    
    return pd[v.size()][sum]; 
}

int main() {
    int n, sum;
    vector<int> v;

    cin >> n;
    while(n--) {
        int val;
        cin >> val;

        v.push_back(val);
    }

    cin >> sum;
    cout << sss(v, sum) << endl;

    return 0;
}

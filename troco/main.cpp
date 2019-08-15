#include <iostream>
#include <vector>

using namespace std;


int troco(vector<int> moedas, int imax) {
    vector<int> dp(imax, 0);
    
    dp[0] = 0;
    for(int i = 1; i < imax; i++) {
        dp[i] = 1000000;
        for(int j = 0; j < (int)moedas.size(); j++) {
            if(i - moedas[j] >= 0) { 
                dp[i] = min(dp[i], dp[i - moedas[j]] + 1);
            }
        }
    }
    return dp[imax - 1];
}

int main() {
    
    int n, maxm;
    vector<int> moedas;

    cin >> n;
    while(n--) {
        int v;
        cin >> v;
        moedas.push_back(v);
    }
    cin >> maxm;

    cout << troco(moedas, maxm) << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int mdc(int p, int q) {
    if(q == 0)
        return p;
    else
        return mdc(q, p % q);
}

int mdcls(vector<int> ls) {
    int res = ls[0];
    for(int i = 1; i < ls.size(); i++) {
        res = mdc(res, ls[i]);
    }
    return res;
}



int main() {
    
    int n;
    int aux;
    vector<int> l;
    
    cin >> n;
    while(cin >> aux) {
        l.push_back(aux);
    } 

    cout << mdcls(l) << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <stack>

using namespace std;

int dfs(vector<vector<int> >& adj, int initial) {
    stack<int> stk;
    map<int, bool> memo;
    int curr = initial;

    stk.push(curr);
    memo[curr] = true;

    while(!stk.empty()) {
        curr = stk.top();
        stk.pop();

        for(int i = 0; i < adj.size(); i++) {
            if(memo.count(i) == 0 && adj[curr][i] > 0) {
                stk.push(i);
                memo[i] = true;
            }
        }
    
    } 
    
    return curr; 
}

int main() {

    int t, f, size;

    cin >> size;
       
    vector<vector<int> > adj(size + 1, vector<int>(size + 1, 0));
    
    while(cin >> t >> f) {
        adj[t][f] = 1;
        adj[f][t] = 1;
    }

    cout << dfs(adj, 6);

    return 0;
}

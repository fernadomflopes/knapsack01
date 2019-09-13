#include <iostream>
#include <queue>

using namespace std;

void init(int id[], int N) {
    for(int i = 0; i < N; i++) {
        id[i] = i;
    }
}

int root(int id[], int p) {
    if(id[p] == p) 
        return p;
    else
        return root(id, id[p]);
}

int connected(int id[], int p, int q) {
    return root(id, p) == root(id, q);
}

void unionf(int id[], int p, int q) {
    if(connected(id, p, q))
        return;
    else
        id[root(id, p)] = root(id, q);
}

void show(int id[], int N) {
    for(int i = 0; i < N; i++) {
        cout << id[i] << " ";
    }
    cout << endl;
} 


struct Aresta {
    int from;
    int to;
    int weight;
    Aresta(int f, int t, int w): from(f), to(t), weight(w) {}
};

struct compare {
    bool operator()(const Aresta& a1, const Aresta& a2) {
        return a1.weight > a2.weight;
    }
};

int main() {

    int m, n;
    int *id;
    priority_queue<Aresta, vector<Aresta>, compare > pq;

    cin >> m >> n;

    id = new int[m];
    init(id, m);
    while(n--) {
        int f, t, w;
        cin >> t >> f >> w;
        pq.push(Aresta(t, f, w));    
    } 


    int ac = 0;
    while(!pq.empty()) {
        Aresta cur = pq.top();
        pq.pop();
        if(connected(id, cur.to, cur.from) != true) {
            unionf(id, cur.to, cur.from);
            ac = ac + cur.weight; 
        }
    }

    cout << ac << endl;

}

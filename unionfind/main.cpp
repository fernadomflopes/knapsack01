#include <iostream>

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

int main() {

    int N;
    int *id;

    N = 9;

    id = new int[N];
    
    init(id, N);

    unionf(id, 4, 3);
    show(id, N);  
   

}

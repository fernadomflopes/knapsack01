#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int ks(vi valor, vi peso, int imax) {
    vvi pd(valor.size() + 1, vi(imax + 1, 0));
    for(int atual = 1; atual <= (int)valor.size(); atual++) {
        for(int capacidade = 1; capacidade <= imax; capacidade++) {

           int indice_atual       = atual - 1;
           int *peso_atual        = &peso[indice_atual];
           int *valor_atual       = &valor[indice_atual];
           int *mochila_anterior  = &pd[atual - 1][capacidade];
           int *mochila_atual     = &pd[atual][capacidade];

           if(capacidade < *peso_atual) {
                *mochila_atual = *mochila_anterior;
           } else {
                int peso_de_folga  = capacidade - (*peso_atual);
                int *submochila    = &pd[atual - 1][peso_de_folga];

                *mochila_atual = max(*valor_atual + (*submochila), *mochila_anterior);
           }

        }
    }
    return pd[valor.size()][imax]; 
}


int main() {
    
    int n, maxv;
    vi vv, vp;

    cin >> n;
    while(n--) {
        int v, p;
        cin >> v >> p;
        vv.push_back(v);
        vp.push_back(p);
    }
    cin >> maxv;
    cout << ks(vv, vp, maxv) << endl;

    return 0;
}

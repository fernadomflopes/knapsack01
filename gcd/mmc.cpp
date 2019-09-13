#include <iostream>

using namespace std;

int mdc(int p, int q) {
    if(q == 0)
        return p;
    else
        return mdc(q, p % q);
}

int mmc(int p, int q) {
    return p * (q / mdc(p,q));
}


int main() {

    cout << mmc(36, 14) << endl;    

    return 0;
}

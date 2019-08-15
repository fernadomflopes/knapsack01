#include <iostream>
#include <vector>

using namespace std;

int gcd(int p, int q) {
    if(q == 0) return p;
    else return gcd(q, p % q);
}


int main() { 
    cout << gcd(50, 12) << endl;

    return 0;
}



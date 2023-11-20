#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long mpow(long a, long b) {
    a = a % MOD;
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b & 1) return (a * mpow(a, b-1)) % MOD;
    return mpow((a*a) % MOD, b/2) % MOD;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        cout <<  (mpow(2, x) + (x==y?0:mpow(2, y)))%MOD << "\n";
    }
    return 0;
}
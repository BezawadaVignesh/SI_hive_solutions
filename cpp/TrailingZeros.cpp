#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    // lengendre formula 
    while(t--){
        unsigned long n, power = 5, z = 0;
        cin >> n;
        while(true){
             z += n / power;
             if( n/power == 0) break;
             power *= 5;
        }
        cout << z << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,c=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << "Case #" << c++ <<":\n";
        for(int i=1;i<=n;i++){
            cout << string(n-i, ' ') << string(i, '*') << "\n";
        }
    }
    return 0;
}

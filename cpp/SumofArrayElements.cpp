#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long res = 0;  // long is use because max size is N(1000) * arr[i](10^15) = 10^18
                       // which is exactly equla to size of long
        while (n--) {
            long tmp;
            cin >> tmp;
            res += tmp;
        }
        cout << res << "\n";
    }
    return 0;
}
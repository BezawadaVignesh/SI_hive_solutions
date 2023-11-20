#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n;
        bool flag=false;
        cin >> n;
        string res = to_string(n+1);
        long i=res.size()/2-1, s=res.size()-1;

        while(i >= 0) {
            if(res[i] == res[s-i]) i--;
            else if(res[i] > res[s-i]) {
                res[s-i] = res[i];
                flag = true;
            } else {
                if(flag) res[s-i] = res[i];
                else {
                    i = res.size()/2-1;
                    if(res.size() & 1) {
                        if(res[i+1] != '9'){
                            res[i+1]++;
                            flag = true;
                            continue;
                        } else res[i+1] = '0';
                    }
                    while(res[i] == '9'){
                        res[s-i] = res[i] = '0';
                        i--;
                    }
                    res[s-i] = ++res[i];
                }
                flag = true;
            }
        }
        cout << res << " \n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n ,q;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    // Generating a compressed array
    vector<pair<int, int>> a;
    int p1 = -1;
    for(int i=0;i<n;i++) {
        if(a.empty() or arr[i] != a[p1].first) {
            p1 ++;
            a.push_back({arr[i], 1});
        }else a[p1].second++;
    }
    
    // handling queries 
    cin >> q;
    while(q--) {
        int tmp;
        cin >> tmp;
        int l = 0, r = a.size()-1;
        while(l <= r) {
            int m = (l+r)/2;
            if(a[m].first == tmp) {
                cout << a[m].second  << "\n";
                goto gotit;
            }else if(a[m].first < tmp){
                l = m+1;
            }else r = m-1;
        }
        cout << "0\n";
        gotit: ;
    }
    
    return 0;
}
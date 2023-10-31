#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
            }
        }
        for(int l=n-1;abs(l)<n;l--){
            int sum = 0;
            for(int i=0;i<n-abs(l);i++){
                int j = i + abs(l);
                sum += (l > 0) ? arr[i][j] : arr[j][i];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}

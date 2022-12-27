#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int t;
        cin >> t;
        int arr[t];
        for(int i = 0; i < t; i++) cin >> arr[i];
        
        int maxi = 0;
        for(int i = 1; i < t; i++) {
            if(arr[i] < arr[i-1]) {
                maxi = max(maxi, arr[i-1] - arr[i]);
                arr[i] = arr[i-1];
            }
        }

        if(maxi == 0) {
            cout << 0 << endl;
            continue;
        }

        cout << (int)(1 + log2(maxi)) << endl;
    }
    return 0;
}
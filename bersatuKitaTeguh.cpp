#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; 
    cin >> n;
    if(n == 1) {
        int temp;
        cin >> temp;
        cout << temp << endl;
        return;
    }
    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long pointerA = 0;
    long long pointerB = pointerA + 1;
    long long total = 0;
    long long maxValue = 0;
    total = arr[pointerA];
    while(pointerA < n && pointerB < n) {
        if(arr[pointerA] == arr[pointerB]) {
            total += arr[pointerB];
            pointerB++;
        } else {
            total = arr[pointerB];
            pointerA = pointerB;
            pointerB = pointerA + 1;
        }
        maxValue = max(maxValue, total);
    }
    cout << maxValue << endl;
}

int main() {
    
    long long T;
    cin >> T;
    while(T--) {
        solve();
    }

}
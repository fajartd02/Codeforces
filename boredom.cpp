#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    unsigned long long int m = 0;
    vector<unsigned long long int> v(n);
    for(unsigned long long int i = 0; i < n; i++) {
        cin >> v[i];
        m = max(m, v[i]);
    }

    vector<unsigned long long int> dp(m+1, 0);
    vector<unsigned long long int> count(m+1, 0);

    for(unsigned long long int i = 0; i < n; i++) {
        count[v[i]]++;
    }

    dp[0] = 0;
    dp[1] = count[1];

    for(unsigned long long int i = 2; i <= m; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + count[i] * i);
    }

    cout << dp[m] << endl;
}
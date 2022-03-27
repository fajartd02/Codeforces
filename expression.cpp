#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll arr[10];
    ll sum = 0;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        ll add = sum + arr[i];
        ll minus = sum - arr[i];
        ll multiple = sum * arr[i];
        ll temp = max(add, minus);
        ll temp2 = max(temp, multiple);

        sum = temp2;
    }

    ll sum2 = 0;
    for(int i = 2; i >= 0; i--) {
        ll add = sum2 + arr[i];
        ll minus = sum2 - arr[i];
        ll multiple = sum2 * arr[i];
        ll temp = max(add, minus);
        ll temp2 = max(temp, multiple);

        sum2 = temp2;
    }

    cout << max(sum, sum2) << endl;


    return 0;
}
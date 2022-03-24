#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll MAX = 10e5;
// vector<bool> polycarp(1000000000);

// void poly() {
//     polycarp[1] = true;
//     for(ll i = 2; i < MAX; i++) {
//         polycarp[i * i] = true;
//         polycarp[i * i * i] = true;
//     }
// }

// ll countPoly(ll num) {
//     ll ans = 0;
//     for(ll i = 1; i <= num; i++) {
//         if(polycarp[i]){
//           ans++;
//         //   cout << i<< " ";  
//         } 
//     }
//     // cout << endl;
//     return ans;
// }

ll countPoly(ll num) {
    ll count = 0;
    map<ll, bool> mp;
    for(ll i = 1; i <= num; i++) {
        if(i*i > num) break;
        if(i*i <= num) mp[i*i] = true;
        if(i*i*i <= num) mp[i*i*i] = true;
    }

    return mp.size();
}

int main() {

    // poly();// cout << polycarp[4];
    ll n;
    cin >> n;
    while(n--) {
        ll num;
        cin >> num;
        cout << countPoly(num) << endl;
    }

}
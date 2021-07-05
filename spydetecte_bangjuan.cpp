#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, x; cin >> t;
    while(t--){
        cin >> n;
        int ans;
        cin >> x;
        int save = x;
        for(int i = 1; i < n; i++){
            cin >> x;
            if(i == 1 && save != x) ans = 1;
            else{
                if(save != x) ans = i + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

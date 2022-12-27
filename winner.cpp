#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<pair<string, int>> vp;

    for(int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        vp.push_back({name, score});
        mp[name] += score;
    }

    int maxValue = 0;

    for(auto x : mp) {
        maxValue = max(maxValue, x.second);
        // cout << x.first << " " << x.second << endl;
    }

    map<string, int>mp2;

    for(int i = 0; i < n; i++) {
        mp2[vp[i].first] += vp[i].second;
        if(maxValue <= mp2[vp[i].first] && mp[vp[i].first] == maxValue) {
            cout << vp[i].first << endl;
            break;
        }
    }

    return 0;
}
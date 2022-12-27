#include <bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}

string solve(int s, int n) {
    vector<vector<int>> dragons(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        cin >> dragons[i][0] >> dragons[i][1];
    }
    sort(dragons.begin(), dragons.end(), sortcol);

    for(int i = 0; i < n; i++) {
        if(s <= dragons[i][0]) {
           return "NO";
        } else {
            s += dragons[i][1];
        }
    }

    return "YES";
}

int main() {
    int s, n;
    cin >> s >> n;
    cout << solve(s, n) << endl;
    return 0;
}
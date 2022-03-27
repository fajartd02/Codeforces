#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    map<string, int> mp;

    ll n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (mp.find(s)->second == 0) {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            int x = mp.find(s)->second;
            cout << s << x << endl;
            mp[s]++;
        }
    }

    return 0;
}
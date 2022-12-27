#include <bits/stdc++.h>
using namespace std;

void solve(string s) {

    // 1 digit
    for(auto c : s) {
        if((c - '0') % 8 == 0) {
            cout << "YES\n" << c << "\n";
            return;
        }
    }

    // 2 digit
    for(int i = 0; i < s.size(); i++) {
        for(int j = i + 1; j < s.size(); j++) {
            int value = (s[i]-'0') * 10 + (s[j] - '0');
            if (value % 8 == 0) {
                cout << "YES\n" << value << "\n";
                return;
            }
        }
    }

    // 3 digit
    for(int i = 0; i < s.size(); i++) {
        for(int j = i + 1; j < s.size(); j++) {
            for(int k = j + 1; k < s.size(); k++) {
                int value = (s[i] - '0') * 100 + (s[j]-'0') * 10 + (s[k]-'0');
                if (value % 8 == 0) {
                    cout << "YES\n" << value << "\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

int main() {
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
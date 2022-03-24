#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string Capitalize(string s) {
    int lowerKey = 0;
    for(int i = 0; i < s.length(); i++) {
        if(islower(s[i])) {
            lowerKey++;
        }
    }

    if(islower(s[0]) && lowerKey == 1) {
        for(int i = 0; i < s.length(); i++) {
            if(i == 0) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    } else if (lowerKey == 0) {
        for(int i =0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    return s;
}

int main() {

    string s;
    cin >> s;
    cout << Capitalize(s) << endl;

    return 0;
}
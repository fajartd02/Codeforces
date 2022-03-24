#include <bits/stdc++.h>
using namespace std;

string SquareString(string s) {
    if(s.length() % 2 == 1) return "NO";
    int n = s.length();
    int i = 0;
    int l = n / 2;
    while(i + l < n && s[i] == s[i + l]) i++;
    if(i+l==n) return "YES";
    return "NO";
}

int main() {
    int n ;
    cin >> n;
    string s;
    while(n--) {
        cin >> s;
        cout << SquareString(s) << "\n";
    }
    return 0;
}
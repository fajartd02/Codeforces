#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string search = "hello";
    int indexSearch = 0;
    for(int i = 0; i < s.size(); i++) {
        char currentChar = s[i];
        if(indexSearch == search.size()) break;
        if(currentChar == search[indexSearch]) {
            indexSearch++;
        }
    }

    if(indexSearch == search.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
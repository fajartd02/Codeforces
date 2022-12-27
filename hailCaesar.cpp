#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int K = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            K++;
        }
    }

    K = K % 26;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            continue;
        } else if(s[i] == ' ') {
            cout << " ";
            continue;
        }

        int temp = s[i] - K;
        if(temp < 'a') {
            temp = temp + 26;
        }
        cout << (char)temp;
    }
    cout << "\n";
    
}
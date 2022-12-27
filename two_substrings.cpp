#include <bits/stdc++.h>
using namespace std;

// Link: https://codeforces.com/contest/550/problem/A

bool valid(string s, int i) {
    if(i == 0) return ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A')) && (s[i+2] != 'A' && s[i+2]  != 'B');
    if(i == s.size()-2) return ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A')) && (s[i-1] != 'A' && s[i-1] != 'B');
    return ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A')) && (s[i-1] != 'A' && s[i-1] != 'B') && (s[i+2] != 'A' && s[i+2]  != 'B');
}

void solve2(string s) {
    int visit[2]; // 0 => AB ; 1 => BA
    visit[0] = visit[1] = 0;
    for(int i = 0; i < s.size()-1 ; i++) {
        if(i == 0) {
            if (valid(s, i)) {
                // cout << "ke 1" << endl;
                if(s[i] == 'A') {
                    visit[0] = 1;
                } else if(s[i] == 'B') {
                    visit[1] = 1;
                }
            }
        } else if(i == s.size()-2) {
            if (valid(s, i)) {
                // cout << "ke 2" << endl;
                if(s[i] == 'A') {
                    visit[0] = 1;
                } else if(s[i] == 'B') {
                    visit[1] = 1;
                }
            }
        } else {
            if (valid(s, i)) {
                // cout << "ke 3" << endl;
                if(s[i] == 'A') {
                    visit[0] = 1;
                } else if(s[i] == 'B') {
                    visit[1] = 1;
                }
            }
        }
    }

    if(visit[0] == 1 && visit[1] == 1) cout << "YES\n";
    else cout << "NO\n";
}

void solve(string s) {
    int x1,y1,x2,y2;
    x1 = s.find("AB");
    y1 = s.find("BA", x1 + 2);
    x2 = s.find("BA");
    y2 = s.find("AB", x2 + 2);
    
    if ((x1!=-1 && y1!=-1) || (x2!=-1 && y2!=-1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}
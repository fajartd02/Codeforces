#include <bits/stdc++.h>
using namespace std;

void longestPalindrome(string s) {
    bool dp[s.length()][s.length()];
    memset(dp, false, sizeof(dp));
    int start = 0;
    int maxx = 1;

    for(int i = 0; i < s.length(); i++) {
        dp[i][i] = true;
    }

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxx = 2;
        }
    }

    

    for(int len = 3; len <= s.length(); len++) {
        for(int left = 0; left < s.length() - len + 1; left++) {
            int right = len + left - 1;
            if(s[left] == s[right] && left + 1 < s.length() && right - 1 >= 0 && dp[left + 1][right - 1] == true) {
                dp[left][right] = true;
                if(len > maxx) {
                    maxx = len;
                    start = left;
                }
            }
        }
    }

    cout << s.substr(start, maxx) << endl;

    // int maxx = 0;
    // for(int i = 0; i < s.length(); i++) {
    //     for(int j = 0; j < s.length(); j++) {
    //         if(dp[i][j]) {
    //             int temp = abs(i-j);
    //             cout << s.substr(i, j) << " ";
    //             if(temp > maxx) maxx = temp;
    //         }
    //     }
    // }

    // for(int i = 0; i < s.length(); i++) {
    //     for(int j = 0; j < s.length(); j++) {
    //         if(dp[i][j] && abs(i-j) == maxx) {
    //             cout << s.substr(i, j) << " ";
    //         }
    //     }
    // }
    // cout << endl;
}

int main() {

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        longestPalindrome(s);
    }

}
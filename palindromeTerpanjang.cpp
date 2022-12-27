#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    char temp;
    int pointerA = 0;
    int pointerB = s.size() - 1;
    while(pointerA < pointerB) {
        temp = s[pointerA];
        s[pointerA] = s[pointerB];
        s[pointerB] = temp;
        pointerA++;
        pointerB--;
    }

    return s;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        string value = "";
        string reverseValue = "";

        unordered_map<string, string> mp;
        for(int i = 0; i < s.size(); i++) {
            value = s[i];
            int j = i + 1;
            while(j < s.size()) {
                value += s[j];
                if(value.size() > 1) {
                    reverseValue = reverse(value);
                    if(value == reverseValue) {
                        mp[value] = value;
                    }
                    // cout << "VALUE: " << value << endl;
                    // cout << "REVERSE VALUE: " << reverseValue << endl;
                }
                j++;
            }
        }

        int maxi = 0;
        for(auto x : mp) {
            if(x.second.length() > maxi) {
                maxi = x.second.length();
            }
        }

        // cout << maxi << endl;
        // stack buat reverse
        stack <string> st;
        for(auto x : mp) {
            if(maxi == x.second.length()) {
                st.push(x.second);
            }
        }
        while(!st.empty()) {
            if(st.size() == 1) {
                cout << st.top();
                cout << "\n";
            } else {
                cout << st.top();
                cout << " ";
            }
            st.pop();
        }
    }

    return 0;
}
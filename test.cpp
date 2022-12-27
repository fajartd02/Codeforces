#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<pair<int, int> > s;
  
    s.push({ 10, 20 });
    s.push({ 15, 5 });
    s.push({ 1, 5 });
    s.push({ 5, 10 });
    s.push({ 7, 9 });
  
    cout << s.top().first << endl;
}
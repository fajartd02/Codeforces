#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin >> num;
    if(num % 4 == 0 || num % 7 == 0 || num % 47 == 0 ||
        num % 74 == 0 || num % 44 == 0 || num % 77 == 0 ||
        num % 444 == 0 || num % 447 == 0 || num % 477 == 0 ||
        num % 474 == 0 || num % 744 == 0 || num % 774 == 0 || 
        num % 777 == 0 || num % 747 == 0) 
    {
        cout << "YES\n";
        return 0;
    }

    int temp = num;
    bool lucky = true;
    while(temp > 0) {
        int checkNum = temp % 10;
        if(checkNum != 4 && checkNum != 7) lucky = false;
        temp /= 10;
    }
    string res = (lucky) ? "YES\n" : "NO\n";
    cout << res;
    return 0;
}
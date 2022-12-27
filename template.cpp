#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int count = 0;
    for(int i = 100; i <= 999; i++) {
        int num = i;
        int M = num % 10;
        num /= 10;
        int L1 = num % 10;
        num /= 10;
        int L2 = num % 10;

        if(L1 == L2) {
            int angka = L2 * 100;
            angka = angka + (L1 * 10);
            angka = angka + M;

            angka *= M;
            cout << "L: " << L1 << " M: " << M <<  " Angka: " << angka << endl;
        }
    }

    cout << count;

}
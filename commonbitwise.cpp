#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int pos) {
    int mask = (1 << pos);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int pos) {
    int mask = (1 << pos);
    n = (n | mask);
}

void clearIthBit(int &n, int pos) {
    int mask = ~(1 << pos);
    n = n & mask;
}

void updateIthBit(int &n, int pos, int newBit) {
    clearIthBit(n , pos);
    int mask = (newBit << pos);
    n = n | mask;
}

void clearLastBits(int &n, int pos) {
    int mask = (~0 << pos);
    n = n & mask;
}

void clearRangeBits(int &n, int i, int j) {
    // int  a = 
}

int main() {

    int n = 15; // 1 1 1 1
    // 8 4 2 1
    int pos;
    int newBit;
    // cin >> pos >> newBit;
    cin >> pos;
    // cout << getIthBit(n, pos) << endl;
    // setIthBit(n, pos);
    // clearIthBit(n, pos);
    // updateIthBit(n, pos, newBit);
    clearLastBits(n, pos);
    cout << n << endl;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    int col;
    cin >> row >> col;
    char arr2D[row][col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr2D[i][j];
        }
    }

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int index = 0;
        int size = s.size();
        bool hasil = false;
        for(int i = 0; i < row; i++) {
            bool isFound = false;
            for(int j = 0; j < col; j++) {
                if(arr2D[i][j] == s[index]) {
                    // cout << "MASUK" << endl;
                    index = 1;
                    int tempJ = j;
                    int tempI = i;

                    // kiri ke kanan
                    j = tempJ + 1;
                    while(j < col) {
                        if(arr2D[i][j] == s[index]) {
                            index++;
                            j++;
                        } else {
                            j++;
                        }
                    }

                    if(index == size) {
                        cout << "YA\n";
                        isFound = true;
                        hasil = true;
                        break;
                    }

                    // atas ke bawah 
                    index = 1;
                    i = tempI + 1;
                    j = tempJ;
                    while(i < row) {
                        if(arr2D[i][j] == s[index]) {
                            i++;
                            index++;
                        } else {
                            i++;
                        }
                    }
                    if(index == size) {
                        cout << "YA\n";
                        isFound = true;
                        hasil = true;
                        break;
                    }

                    // kiri-atas ke kanan-bawah
                    index = 1;
                    i = tempI + 1;
                    j = tempJ + 1;
                    while(i < row && j < col) {
                        if(arr2D[i][j] == s[index]) {
                            i++;
                            j++;
                            index++;
                        } else {
                            i++;
                            j++;
                        }
                    }

                    if(index == size) {
                        cout << "YA\n";
                        isFound = true;
                        hasil = true;
                        break;
                    }
                    i = tempI;
                    j = tempJ;
                    index = 0;
                }                
            }

            if(isFound) {
                break;
            }
        }
        if(!hasil) {
            cout << "TIDAK\n";
        }
    }


    return 0;
}
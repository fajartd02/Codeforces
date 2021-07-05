#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[5][5];
	int x=0,y=0;
	for(int i = 0 ; i  <5  ; i++){
		for(int j = 0 ; j < 5 ; j ++){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				x = i + 1;
				y = j + 1;
			}
		}
		
		getchar();
	}
	int move = abs(3 - x) + abs(3 - y);
	cout << move << endl;
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		char arr[t][t];
		int x1 = -1, y1 = -1;
		int x2 = -1 , y2 = -1;
		for(int i = 0 ; i < t; i++) {
			for(int j = 0 ; j < t ; j++){
				cin >> arr[i][j];
				if(arr[i][j] == '*'){
					if(x1 == -1 && y1 == -1){
						x1 = i;
						y1 = j;
					}else{
						x2 = i;
						y2 = j;
					}
				}
			}
		}
			if(x1 == x2  || y1 == y2){
				if(x1 == x2){
//					if(arr[x1 + 1][y1] != '*'){
//						arr[x1 + 1][y1] = '*';
//					}
//					else if(arr[x1 - 1][y1] != '*'){
//						arr[x1 -1][y1] = '*';
//					}
//					if(arr[x2 + 1][y2] != '*'){
//						arr[x2 + 1][y2] = '*';
//					}
//					else if(arr[x2 - 1][y2] != '*'){
//						arr[x2 -1][y2] = '*';
//					}	
					if(x1 + 1 == t){
						arr[x1 - 1][y1] = '*';
						arr[x2 - 1][y2] = '*';
					}else{
						arr[x1 + 1][y1] = '*';
						arr[x2 + 1][y2] = '*';
					}				
				}
				else if(y1 == y2){
					if(y1 + 1 == t){
						arr[x1][y1 - 1] = '*';
						arr[x2][y2 - 1] = '*';
					}else{
						arr[x1][y1 + 1] = '*';
						arr[x2][y2 + 1] = '*';
					}
				}
				
			}else{
				arr[x1][y2] = '*';
				arr[x2][y1] = '*';
			}
			
			for(int i = 0 ; i < t ; i++){
				for(int j = 0 ; j < t ; j++){
					cout << arr[i][j];
				}
				cout << endl;
			}
	}
	
	return 0;
}

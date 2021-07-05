#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int t;
		cin >> t;
		int arr[t + 1];
		for(int j = 1 ; j <= t ; j++){
			cin >> arr[j];
		}
		for(int k = 1 ; k <= t ; k++){
			if(k == 1){
				if(arr[k] == arr[k + 1] || arr[k] == arr[k + 2]){
					continue;
				}else{
					cout << k << endl;
					break;
				}
			}
			if(k == t){
				if(arr[k] == arr[k - 1] || arr[k] == arr[k - 2]){
					continue;
				}else{
					cout << k << endl;
					break;
				}
			}else{
				if(arr[k] == arr[k - 1] || arr[k] == arr[k + 1]){
					continue;
				}else{
					cout << k << endl;
					break;
				}
			}
		}
	}
  	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x;
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		int count_x = 0;
		for(int j = 0 ; j < 3 ; j++){
			cin >> x;
			if(x == 1){
				count_x += 1;
			}	
		}
		if(count_x >= 2){
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}

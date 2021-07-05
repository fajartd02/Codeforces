#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string array;
	cin >> array;
	int count = 0;
	for(int i = 0 ; i < array.length(); i++){
		if(array[i] == array[i + 1]){
			count += 1;
		}
	}
	cout << count << endl;
	
	return 0;
}

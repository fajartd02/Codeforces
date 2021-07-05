#include <bits/stdc++.h>
using namespace std;
int main(){
	string temp;
	cin >> temp;
	string array;
	int n = 0;
	for(int i = 0 ; i < temp.length(); i ++){
		int valid = 0;
		for(int j = 0 ; j < i; j++){
			if(temp[i] == temp[j]){
				valid = 1;
			}
		}
		if(valid == 0){
			n += 1;
		}
	}
	if(n % 2 == 1){
		cout << "IGNORE HIM!" << endl;
	}else{
		cout << "CHAT WITH HER!"<<endl;
	}
	
	return 0;
}

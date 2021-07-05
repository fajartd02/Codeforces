#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x; 
	while(x--){
	string n;
	cin >> n;
	if(n.length() > 10){
		int len = n.length() - 2;
		cout << n[0] << len << n[n.length() - 1] << endl;
	}else{
		cout << n << endl;
	 }	
	}
}

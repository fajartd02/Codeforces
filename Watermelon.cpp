#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n; //8 melon 
	n -= 2; //genap -> pete
	
	//billy
	if(n % 2 == 0 && n != 0){
		cout << "YES"<< endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}

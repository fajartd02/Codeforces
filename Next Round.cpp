#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont = 0;
	int n,m;
	cin >> n >> m;
	int x[n + 1];
	for(int i = 0 ; i  < n ; i++){
		cin >> x[i];
	}
	for(int j = 0 ; j < n ; j++){
		if(x[j] >= x[m - 1] && x[j] != 0){
			cont += 1;
		}
	}
	
	cout << cont << endl;
	return 0;
}

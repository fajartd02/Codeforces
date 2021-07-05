#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int years = 0;
	while(1){
		if(n > k){
			break;
		}
		years += 1;
		n *= 3;
		k *= 2;
	}
	cout << years << endl;
	return 0;
}

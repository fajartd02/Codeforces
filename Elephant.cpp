#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	int x = 0;
	int move = 0;
	while(x < n){
		move += 1;
		x += 5;
	}
	cout << move << endl;
	return 0;
}

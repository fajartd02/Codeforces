#include <bits/stdc++.h>
using namespace std;
int main(){
	int digit;
	cin >> digit;
	while(true){
		int a,b,c,d;
		digit += 1;
		//2015
		a = digit / 1000;  //2
		b = (digit / 100) % 10; //0
		c = (digit / 10) % 10; //1
		d = digit % 10; // 5
		if(a != b && a!=c && a!=d && b!=c && b!=d && c!=d){
			break;
		}
	}
	cout << digit << endl;
//	int x= 1999;
//	cout << 1999/1000;	
	return 0;
}

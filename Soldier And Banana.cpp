#include <bits/stdc++.h>
using namespace std;

int main(){
	int count = 0;
	int x,y,z;
	cin >> x >> y >> z;
	for(int i = 1 ; i <= z ; i++){
		count += i * x;
	}
	if(count > y){
		cout << count - y << endl;;
	}else{
		cout << "0"<< endl;
	}
}

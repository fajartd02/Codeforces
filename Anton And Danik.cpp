#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string name;
	cin >> name;
	int a = 0, d = 0;
	for(int i = 0 ; i < n ; i++){
		if(name[i] == 'A'|| name[i] == 'a'){
			a += 1;
		}else{
			d += 1;
		}
	}
	if(a == d){
		cout << "Friendship\n";
		return 0;
	}else{
		string x = (a > d) ? "Anton" : "Danik";
	cout << x << endl;
		
	}

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	string name;
	cin >> name;
	int upper = 0, lower = 0;
	for(int i = 0 ; i < name.length(); i++){
		if(isupper(name[i]) == true){
			upper +=1;
		}else{
			lower +=1;
		}
	}
	if(upper > lower){
		for(int i = 0 ; i < name.length(); i++){
			name[i] = toupper(name[i]);
		}
	}else if(upper == lower){
		for(int i = 0 ; i < name.length(); i++){
			name[i] = tolower(name[i]);
		}	
	}else{
		for(int i = 0 ; i < name.length(); i++){
			name[i] = tolower(name[i]);
		}
	}
	cout << name << endl;
	
	return 0;
}

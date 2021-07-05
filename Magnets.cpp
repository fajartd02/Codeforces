#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string a[n];
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	int max = 1;
	for(int i = 0 ; i < n - 1 ; i++){
		if(a[i].compare(a[i + 1])== 0){
			continue;
		}else{
			max += 1;
		}
	}
	cout << max << endl;
	
	return 0;
}

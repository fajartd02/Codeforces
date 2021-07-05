#include <bits/stdc++.h>
using namespace std;
int main(){
	char t[101];
	scanf("%s", t); getchar();
	char x[101] = {NULL};
	int y = 0;
	for(int i = strlen(t) - 1  ; i >= 0; i--){
		x[y] = t[i];
		y+=1;
	}
	char cmp[101];
	scanf("%s", cmp); getchar();
//	cout << x << endl;
//	cout << x << endl;
	if(strcmp(x, cmp) == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO\n";
	}
	return 0;
}

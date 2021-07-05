#include <iostream>
using namespace std;
int main(){
	long long a,b,c;
	cin >> a >> b >>c;
	
	long long k = (a%c==0) ? a/c: ((a/c) + 1);
	k = k * ((b%c==0)? b/c: (b/c) + 1);
	cout << k << endl;
}

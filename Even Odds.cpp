#include <stdio.h>

typedef long long ll;

int main(){
	ll n,k;
	ll t = 0;
	scanf("%lld %lld", &n, &k); getchar();
	if(n % 2 == 1) {
		t = n / 2;
		t += 1;
	}else{
		t = n / 2; // t = 10 / 2 = 5
	}
	ll x = 0;
	ll ans = 0;
	ll LOOP = 0;
	if(k <=t){ // t = 5, k = 3
		ans = 1; // ans = 1
		LOOP = k; // LOOP = 3
 	}else {
		ans = 2;
		LOOP = k - t;
	}
	ll i = 1;
	while(i < LOOP){
		ans += 2;
		i++;
	}
	printf("%lld\n", ans);
		
	return 0;
}

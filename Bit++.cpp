#include <stdio.h>

int main(){
	
	int count = 0;
	int n;
	scanf("%d", &n); getchar();
	char arr[4];
	while(n--){
		scanf("%s", arr);
		if((arr[0] == 'X' && arr[2] == '+') || (arr[0] == '+' && arr[2] == 'X')){
			count += 1;
		}
		else{
			count -= 1;
		}
	}
	printf("%d\n", count);
}

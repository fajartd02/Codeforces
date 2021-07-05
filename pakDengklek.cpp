#include <stdio.h>
#include <string.h>
typedef long long ll;

struct n{
	char name[11];
};

int main(){
	ll n;
	scanf("%lld", &n); getchar();
	struct n person[n];
	for(int i = 0 ;i < n ; i++){
		scanf("%s", person[i].name);
		getchar();
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n - 1 - i ; j++){
			if(strlen(person[j].name) > strlen(person[j + 1].name)){
				struct n temp;
				temp = person[j];
				person[j] = person[j + 1];
				person[j + 1] = temp;
			}
			else if(strlen(person[j].name) == strlen(person[j + 1].name)){
				if(strcmp(person[j].name, person[j + 1].name) > 0){
					struct n temp;
					temp = person[j];
					person[j] = person[j + 1];
					person[j + 1] = temp;					
				}
			}
		}
	}
	
	for(int i = 0 ; i < n ; i ++){
		printf("%s\n", person[i].name);
	}	
	return 0;
}

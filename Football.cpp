#include <stdio.h>
#include <string.h>

int main() {
    char x[101];
    scanf("%s", x); getchar();
    int max = 0;
    int count = 1;

    for(int i = 0 ; i < strlen(x) - 1; i++){
        if(x[i] == x[i + 1]) {
            count ++;
        }else{
            count = 1;
        }
        if(count > max) {
            max = count;
        }
    }
    if(max >= 7) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
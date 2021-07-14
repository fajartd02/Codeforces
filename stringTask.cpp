#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool notVowels(char x) {
    int valid = 1;
    char vowels[12] = {'y','Y','a', 'A', 'i', 'I', 'u', 'U', 'e', 'E', 'o', 'O'};
    for(int i = 0; i < 12; i++){
        if(x == vowels[i]){
            valid = 0;
        }
    }

    if(valid == 1) {
        return true;
    }else{
        return false;
    }
}

int main() {

    char x[101];
    scanf("%s", x);
    for(int i = 0 ; i < strlen(x); i++) {
        if(notVowels(x[i])) {
            printf(".%c", tolower(x[i]));
        }
    }
    printf("\n");

}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char s[50];
	scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        if(isalpha(s[i])){
            printf("YES");
        }
        else{
            printf("NO");
            break;
        }
    }
}

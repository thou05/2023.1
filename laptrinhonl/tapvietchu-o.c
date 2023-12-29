#include <stdio.h>

int main(){
    char a[11];
    for(int i = 1; i <= 10; i++){
        scanf(" %c", &a[i]);
    }
    for(int i = 1; i <= 10; i++){
        if(a[i] == '0'){
            printf("\nkhong");
        }
        else if(a[i] == 'o'){
            printf("\nthuong");
        }
        else if(a[i] == 'O'){
            printf("\nhoa");
        }
    }
}
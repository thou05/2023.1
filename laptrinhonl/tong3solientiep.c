#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int check = 0;
    for(int i = 1; i < n - 1; i++){
        if((i-1)+ i + (i + 1) == n){
            check = 1;
        }
    }
    if(check == 1){
        printf("YES");
    }else{
        printf("NO");
    }
}
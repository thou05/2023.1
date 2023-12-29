#include <stdio.h>

int main(){
    int x[11];
    for(int i = 1; i <= 10; i++){
        scanf("%d", &x[i]);
    }
    for(int i = 1; i <= 10; i++){
        if(x[i] == 0 || x[i] < 0){
            x[i] = 1;
        }
        printf("\nX[%d] = %d", i, x[i]);
    }
}
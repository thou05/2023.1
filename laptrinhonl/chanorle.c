#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for(int i = 1; i <= 1; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++){
        if(a[i] > 0){
            if(a[i] % 2 == 0) printf("\nEVEN POSITIVE");
            else printf("\nODD POSITIVE");
        }
        else if(a[i] < 0){
            if(a[i] % 2 == 0) printf("\nEVEN NEGATIVE");
            else printf("\nODD NEGATIVE");
        }
        else printf("\nNULL");
    }
}
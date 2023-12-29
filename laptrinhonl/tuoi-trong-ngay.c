#include <stdio.h>

int main(){
    int n, nam, thang, ngay;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        while(n - 365 >= 0){
            nam++;
            n -= 365;
        }while(n - 30 >= 0){
            thang++;
            n -= 30;
        }while(n - 1 >= 0){
            ngay++;
            n -= 1;
        }
    }
    printf("%d nam\n%d thang\n%d ngay", nam, thang, ngay);
}
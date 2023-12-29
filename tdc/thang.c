#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n == 1) printf("Thang Mot");
    if(n == 2) printf("Thang Hai");
    if(n == 3) printf("Thang Ba");
    if(n == 4) printf("Thang Tu");
    if(n == 5) printf("Thang Nam");
    if(n == 6) printf("Thang Sau");
    if(n == 7) printf("Thang Bay");
    if(n == 8) printf("Thang Tam");
    if(n == 9) printf("Thang Chin");
    if(n == 10) printf("Thang Muoi");
    if(n == 11) printf("Thang Muoi mot");
    if(n == 12) printf("Thang Muoi hai");
    if(n < 1 || n > 12) printf("Khong co");
}
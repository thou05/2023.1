#include <stdio.h>

int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
        printf("nhap gia tri cua phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    int x;
    printf("nhap x: ");
    scanf("%d", &x);
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == x){
            check = 1;
        }
    }
    if(check == 1){
        printf("\nx co trong day so");
    }else if(check == 0){
        printf("\nx khong co trong day so");
    }
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n3 phan tu lon nhat day la: ");
    for(int i = 1; i <= 3; i++){
        printf("%d ", a[i]);
    }
    float s;
    for(int i = 1; i < n; i++){
        for(int j = i + 1; i <= n; i++){
            s += (a[i] + a[j]) / (a[i] - a[j]); 
        }
    }
    printf("\ntong da thuc la: %.1f", s);
}
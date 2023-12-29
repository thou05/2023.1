#include <stdio.h>

void nhap(int n, float x[100]){
    for(int i = 1; i <= n; i++){
        printf("nhap phan tu thu %d: ", i);
        scanf("%f", &x[i]);
        while(x[n] >= 0){
            printf("nhap lai phan tu cuoi: ");
            scanf("%f", &x[n]);
        }
    }
}

void xuat(int n, float x[100]){
    for(int i = 1; i <= n; i++){
        printf("%.1f ", x[i]);
    }
}

float timMaxAm(int n, float x[100]){
    float maxam = x[n];
    for(int i = 1; i < n; i++){
        if(x[i] < 0 && x[i] > maxam){
            maxam = x[i];
        }
    }
    return maxam;
}

int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    float x[100];
    nhap(n, x);
    xuat(n, x);

    float maxAm = timMaxAm(n, x);
    printf("\ngia tri am lon nhat cua day la: %.1f", maxAm); 
}
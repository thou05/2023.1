#include <stdio.h>
#include <math.h>

void nhap(int n, float a[100]){
    for(int i = 0; i <= n; i++){
        printf("\nnhap gia tri bac %d: ", i);
        scanf("%f", &a[i]); 
    }
}

void xuat(int n, float a[100]){
    for(int i = 0; i <= n; i++){
        printf("%.1f*x^%d", a[i], i);
    }
}

float tinhS(int n, float a[100], float x){
    float s = 2021;
    for(int i = 0; i <= n; i++){
        s += a[i]*pow(x, i) + a[i]*i*pow(x, i - 1);
    }
    return sqrt(s);
}

void inHeSo(int n, int m, float a[100], float b[100]){
    float hieu[100];
    if(m > n){
        int tmp = n;
        n = m;
        m = tmp;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == j){
                hieu[i] = a[i] - b[j];
            }
        }
    }
    for(int i = 0; i <= n; i++){
        printf("\n%.1f ", hieu[i]);
    }
}

int main(){
    int n;
    printf("\nnhap bac cua da thuc P: ");
    scanf("%d", &n);
    float a[100];
    printf("\nnhap gia tri cua da thuc P: ");
    nhap(n, a);
    float x;
    printf("\nnhap gia tri x: ");
    scanf("%f", &x);
    float s = tinhS(n, a, x);
    printf("\ngia tri cua bieu thuc da cho la: %.1f", s);

    int m;
    printf("\nnhap bac cua da thuc Q: ");
    scanf("%d", &m);
    float b[100];
    printf("\nnhap gia tri cua da thuc Q: ");
    nhap(m, b);

    printf("\nhe so cua da thuc hieu la: ");
    inHeSo(n, m, a, b);
    
}
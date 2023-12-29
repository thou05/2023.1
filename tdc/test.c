#include <stdio.h>
#include <math.h>

void nhap(int n, float a[100]){
    for(int i = 0; i < n; i++){
        printf("\nnhap he so thu %d: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(int n, float a[100]){
    for(int i = 0; i < n; i++){
        printf("%.1f  ", a[i]);
    } 
}
float giatri(int n, float a[100], float d){
    float tong;
    for(int i = 0; i < n; i++){
        tong += a[i] * pow(d, i);
    }
    return tong;
}
int main(){
    int n, m;
    float a[100], b[100];
    printf("nhap bac cua P(x): ");
    scanf("%d", &n);
    printf("\nnhap he so cua P(x): ");
    nhap(n, a);
    printf("nhap bac cua Q(x): ");
    scanf("%d", &m);
    printf("\nnhap he so cua Q(x): ");
    nhap(m, b);
    printf("\nhe so cua P(x) la: ");
    xuat(n, a);
    printf("\nhe so cua Q(x) la: ");
    xuat(m, b);
    float d1, d2;
    printf("nhap d1: ");
    scanf("%f", &d1);
    float gtriP = giatri(n, a, d1);
    printf("gia tri cua P(d1) la: %.1f", gtriP);
    printf("nhap d2: ");
    scanf("%f", &d2);
    float gtriQ = giatri(n, a, d2);
    printf("gia tri cua P(d1) la: %.1f", gtriQ);
    float s = sqrt(gtriP / gtriQ);
    printf("gia tri cua bieu thuc S la: %.1f", s);

}
#include <stdio.h>
#include <math.h>

void nhap(int n, double *a){
    for(int i = 1; i <= n; i++){
        scanf("%lf", a+i); // địa chỉ 
    }
}

void xuat(int n, double *a){
    for(int i = 1; i <= n; i++){
        printf("%.2lf ", *(a+i)); //gia tri  
    }
}

float max(int n, double *a){
    float max = *(a + 1);
    for(int i = 1; i <= n; i++){
        if(*(a+i) > max){
            max = *(a+i);
        }
    }
    return max;
}

float giatri(int n, double *a, double d){
    double P = 0;
    for(int i = 1; i <= n; i++){
        P += *(a+i) * pow(d,i);
    }
    return P;
}


int main(){
    int n, m;
    int *a, *b;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    double a[100], b[100];
    printf("nhap he so da thuc P: ");
    nhap(n, a);
    printf("nhap he so da thuc Q: ");
    nhap(m, b);
    printf("\nda thuc P: ");
    xuat(n, a);
    printf("\nda thuc Q: ");
    xuat(m, b);
    double maxP = max(n, a);
    printf("\ngia tri he so lon nhat da thuc P: %.2lf", maxP);
    double maxQ = max(m, b);
    printf("\ngia tri he so lon nhat da thuc Q: %.2lf", maxQ);
    double max = maxP > maxQ ? maxP:maxQ;
    printf("\nhe so da thuc lon hon la: %.2lf", max);
    double d;
    printf("\nnhap d: ");
    scanf("%lf", &d);
    double giatriP = giatri(n, a, d);
    double giatriQ = giatri(m, b, d);
    printf("\nda thuc P - Q = %.2lf", giatriP - giatriQ);

}
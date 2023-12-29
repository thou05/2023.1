#include <stdio.h>

void nhap(int n, double x[100]){
    for(int i = 1; i <= n; i++){
        printf("nhap phan tu thu %d: ", i);
        scanf("%lf", &x[i]);
    }
}
double trungbinhcong(int n, double x[100], int a, int b){
    double sum = 0; int dem = 0; 
    for(int i = 1; i <= n; i++){
        if(x[i] >= a && x[i] <= b){
            sum += x[i];
            dem++;
        }
    }
    double tbc;
    if(dem == 0){
        tbc = 0;
    }
    else{
        tbc = sum / dem;
    }
    return tbc;
}


double maxChan(int n, double x[100]){
    int check = 0;
    double max1;
    for(int i = 1; i <= n; i++){
        if(x[i] % 2 == 0){
            max1 = x[i];
            check = 1;
            break;
        }
    }
    double maxchan;
    if(check = 1){
        maxchan = max1;
        for(int i = 1; i <= n; i++){
            if(x[i] > maxchan && x[i] % 2 == 0){
                maxchan = x[i];
            }
        }
    }
    return maxchan;
}

int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    double x[100];
    nhap(n, x);
    int a, b; 
    printf("nhap a va b: ");
    scanf("%d%d", &a, &b);
    while(a >= b){
        printf("nhap lai a va b: ");
        scanf("%d%d", &a, &b);
    }
    double tbc = trungbinhcong(n, x, a, b);
    if(tbc = 0){
        printf("khong co gia tri thuoc a va b: ");
    }
    else{
        printf("tbc phan tu co gia tri [a, b] la: %.1lf", tbc);
    }
    double maxchan = maxChan(n, x);
    printf("gia tri chan lon nhat cua day la: %.1lf", maxchan);


}
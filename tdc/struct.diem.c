#include <stdio.h>
#include <math.h>

struct Diem{
    double hoanh, tung;
}

main(){
    int n;
    printf("nhap so toa do: ");
    scanf("%d", &n);
    struct Diem diem[n];
    for(int i = 1; i <= n; i++){
        printf("\nnhap diem thu %d : ", i);
        scanf("%lf%lf", &diem[i].hoanh, &diem[i].tung);
    }
     for(int i = 1; i <= n; i++){
        printf("\n(%.2lf, %.2lf)", diem[i].hoanh, diem[i].tung);
    }
    //sap xep day diem xa gan goc toa do
    double kc[n];
    for(int i = 1; i <= n; i++){
        kc[i] = sqrt(diem[i].hoanh * diem[i].hoanh + diem[i].tung * diem[i].tung);
    }
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(kc[i] > kc[j]){
                struct Diem tmp = diem[i];
                diem[i] = diem[j];
                diem[j] = tmp;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        printf("\n%.2lf\t%.2lf", diem[i].hoanh, diem[i].tung);
    }
    //tong khoang cach tu tat ca cac diem den goc toa do
    double sumkc = 0;
    for(int i = 1; i <= n; i++){
        sumkc += kc[i];
    }
    printf("\ntong khoang cach tat ca cac diem la: %.2lf", sumkc);
    //tim 1 diem o gan goc toa do nhat
    double kcMin = kc[1];
    int diemMin = 0;
    for(int i = 1; i <= n; i++){
        if(kc[i] < kcMin){
            diemMin = i;
            kcMin = kc[i];
        }
    }
    printf("diem gan goc toa do nhat la: (%.2lf, %.2lf)", diem[diemMin].hoanh, diem[diemMin].tung); 
    // dien tich hinh tron tam o chua tat ca cac diem
    double kcMax = kc[1];
    for(int i = 1; i <= n; i++){
        if(kc[i] > kcMax){
            kcMax = kc[i];
        }
    }
    double s;
    s = 3.14 * kcMax * kcMax;
    printf("dien tich hinh tron tam o chua tat ca cac diem la: %.2lf", s); 
}
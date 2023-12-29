#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("nhap so diem: ");
    scanf("%d", &n);
    float x[n+1], y[n+1];
    for(int i = 1; i <= n; i++){
        printf("nhap diem thu %d: ", i);
        scanf("%f%f", &x[i], &y[i]);
    }
    for(int i = 1; i <= n; i++){
        printf("\n(%.1f, %.1f)", x[i], y[i]);
    }
    float kcMax = 0, kc, x1, x2, y1, y2;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            kc = sqrt(pow(x[j] - x[i], 2) - pow(y[j] - y[i], 2));
            if(kc > kcMax){
                kcMax = kc;
                x1 = x[j];
                y1 = y[j];
                x2 = x[i];
                y2 = y[i];
            }

        }
    }
    printf("\ndoan thang dai nhat la: (%.1f, %.1f) và (%.1f, %.1f)", x1, y1, x2, y2);

    float a, b;
    printf("\nnhap a va b: ");
    scanf("%f%f", &a, &b);
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(y[i] == a * x[i] + b){
            dem++;
        }
    }
    printf("\nso diem thuoc y = ax + b la: %d", dem);
    int dem2 = 0;
    for(int i = 1; i <= n; i++){
        if(y[i] > 0 && y[i] > x[i]){
            dem2++;
        }
    }
    printf("\nso diem nam tren duong phan giac goc phan tu thu nhat la: %d", dem2);
}
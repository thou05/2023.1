#include <stdio.h>
#include <math.h>
#define FOR(i, a, b) for(int i = a; i <= b; i++)

void nhap(int n, float x[100], float y[100]){
    FOR(i, 1, n){
        printf("\nnhap diem thu %d: ", i);
        scanf("%f%f", &x[i], &y[i]);
    }
}

void xuat(int n, float x[100], float y[100]){
    FOR(i, 1, n){
        printf("\n(%.1f, %.1f)", x[i], y[i]);
    }
}

int demDiemThuocP3(int n, float x[100], float y[100]){
    int dem = 0;
    FOR(i, 1, n){
        if(x[i] < 0 && y[i] < 0){
            dem++;
        }
    }
    return dem;
}

void diemxa(int n, float x[100], float y[100]){
    float kcmax = 0, xmax, ymax, kc[100];
    FOR(i, 1, n){
        kc[i] = sqrt(x[i] * x[i] + y[i] * y[i]);
        if(kc[i] > kcmax){
            kcmax = kc[i];
            xmax = x[i];
            ymax = y[i];
        }
    }
    printf("\ncac diem xa goc toa do nhat la: ");
    FOR(i, 1, n){
        if(kc[i] == kcmax){
            printf("\n(%.1f, %.1f)", x[i], y[i]);
        }
    }
}

int demCatHoanh(int n, float x[100], float y[100]){
    int dem = 0;
    FOR(i, 1, n){
        FOR(j, i + 1, n){
            if(x[i] * x[j] < 0){
                dem++;
            }
        }
    }
    return dem;
}

int main(){
    int n;
    printf("nhap so diem: ");
    scanf("%d", &n);
    float x[100], y[100];
    nhap(n, x, y);
    xuat(n, x, y);
    int dem1 = demDiemThuocP3(n, x, y);
    printf("\nso diem thuoc goc phan tu thu 3 la: %d", dem1);
    diemxa(n, x, y);
    int dem2 = demCatHoanh(n, x, y);
    printf("\nso doan thang cat truc hoanh la: %d", dem2);
}
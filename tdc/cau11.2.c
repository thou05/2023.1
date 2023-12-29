#include <stdio.h>
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(){
    int m, n;
    printf("nhap so hang va so cot: ");
    scanf("%d%d", &m, &n);
    float a[m][n];
    FOR(i, 1, m){
        FOR(j, 1, n){
            printf("nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    FOR(i, 1, m){
        printf("\n");
        FOR(j, 1, n){
            printf("%.1f ", a[i][j]);
        }
    }
    float max = a[1][1];
    FOR(i, 1, m){
        FOR(j, 1, n){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    printf("\ngia tri lon nhat cua ma tran la: %.1f", max);
    printf("\ncac gia tri lon nhat nam o cot: ");
    FOR(i, 1, m){
        FOR(j, 1, n){
            if(a[i][j] == max){
                printf("%d ", j);
            }
        }
    }
    float sumHang[m];
    FOR(i, 1, m){
        sumHang[i] = 0;
        FOR(j, 1, n){
            sumHang[i] += a[i][j];
        }
    }
    float maxSumHang = sumHang[1];
    int vitrimax;
    FOR(i, 1, m){
        if(sumHang[i] > maxSumHang){
            maxSumHang = sumHang[i];
            vitrimax = i;
        }
    }
    printf("\nhang co tong lon nhat la: %d", vitrimax);
    float tichDuong = 1;
    int demDuong = 0;
    FOR(i, 1, m){
        FOR(j, 1, n){
            if(a[i][j] > 0){
                tichDuong *= a[i][j];
                demDuong++;
            }
        }
    }
    if(demDuong == 0){
        printf("\nma tran khong co gia tri duong");
    }else{
        printf("\ntich cac gia tri duong la: %.1f", tichDuong);
    }
}
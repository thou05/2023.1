#include <stdio.h>
#define FOR(i, a, b) for(int i = a; i < b; i++)

int main(){
    int m, n;
    printf("nhap so hang va so cot: ");
    scanf("%d%d", &m, &n);
    float a[m][n];
    FOR(i, 0, m){
        FOR(j, 0, n){
            printf("nhap gia tri a[%d][%d]: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
    FOR(i, 0, m){
        printf("\n");
        FOR(j, 0, n){
            printf("%.1f ", a[i][j]);
        }
    }
    //gia tri lon nhat 
    float max = a[0][0];
    FOR(i, 0, m){
        FOR(j, 0, n){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    printf("\ngia tri lon nhat cua ma tran la: %.1f", max);
    //so phan tu bang gia tri lon nhat
    int dem = 0;
    FOR(i, 0, m){
        FOR(j, 0, n){
            if(a[i][j] == max){
                dem++;
            }
        }
    }
    printf("\nso phan tu bang gia tri lon nhat: %d", dem);
    //vi tri cac phan tu lon nhat
    printf("\nvi tri cac phan tu lon nhat: ");
    FOR(i, 0, m){
        FOR(j, 0, n){
            if(a[i][j] == max){
                printf("a[%d][%d] ", i+1, j+1);
            }
        }
    }


}
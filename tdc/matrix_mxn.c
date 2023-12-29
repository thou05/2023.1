#include <stdio.h>

int main(){
    int m, n;
    printf("Nhap m va n: ");
    scanf("%d%d", &m, &n);
    double a[m][n];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            printf("nhap phan tu a[%d][%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    double sum = 0;
    int dem = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] > 10){
                sum += a[i][j];
                dem++;
            }
        }
    }
    if(dem == 0){
        printf("Khong co phan tu lon hon 10");
    }else{
        printf("\ntbc cac phan tu lon hon 10 la: %.2lf", sum/dem);
    }
    int count = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] >= 5 && a[i][j] <= 30){
                count++;
            }
        }
    }
    printf("\nso phan tu trong doan [5,30] la: %d", count);
    double sumCot[n];
    for(int i = 1; i <= n; i++){
        sumCot[i] = 0;
        for(int j = 1; j <= m; j++){
            sumCot[i] += a[j][i];
        }
        printf("\ntong cot %d la %.2lf", i, sumCot[i]);
    }
    double min = sumCot[1]; 
    int cotMin;
    for(int i = 1; i <= n; i++){
        if(sumCot[i] < min){
            min = sumCot[i];
            cotMin = i;
        }
    }
    printf("\nCot co tong be nhat la: %d", cotMin);

    double sum2 = 0;
    int count2 = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j = j + 2){
            if(a[i][j] > 0){
                sum2 += a[i][j];
                count2 ++;
            }
        }
    }
    if(count2 == 0){
        printf("\nKhong co phan tu duong o cot le");
    }else{
        printf("\ntbc phan tu duong cot le la: %.2lf", sum2 / count2);
    }
}
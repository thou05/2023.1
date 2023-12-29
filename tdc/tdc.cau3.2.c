#include <stdio.h>

void nhap(int m, int n, float a[100][100]){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            printf("nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}
void xuat(int m, int n, float a[100][100]){
    for(int i = 1; i <= m; i++){
        printf("\n");
        for(int j = 1; j <= n; j++){
            printf("%.1f  ", a[i][j]);
        }
    }
}

float tinhtichduong(int m, int n, float a[100][100]){
    float tichduong = 1;
    int dem = 0; 
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] > 0){
                tichduong *= a[i][j];
                dem++;
            }
        }
    }
    if(dem == 0){
        tichduong = 0;
    }
    return tichduong;
}

int main(){
    int m,n;
    printf("nhap so hang va so cot: ");
    scanf("%d%d", &m, &n);
    float a[100][100];
    nhap(m, n, a);
    xuat(m, n, a);

    float maxgiatri = a[1][1];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] > maxgiatri){
                maxgiatri = a[i][j];
            }
        }
    }
    printf("\ngia tri lon nhat ma tran la: %.1f", maxgiatri);
    printf("\ncac cot co gia tri lon nhat la: ");
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == maxgiatri){
                printf("%d ", j);
            }
        }
    }
    float sum[100];
    for(int i = 1; i <= m; i++){
        sum[i] = 0;
        for(int j = 1; j <= n; j++){
            if(a[i][j] > 0){
                sum[i] += a[i][j];
            }
        }
    }
    float maxhang;
    int hangmax;
    for(int i = 1; i <= m; i++){
        maxhang = sum[1];
        if(sum[i] > sum[1]){
            maxhang = sum[i];
            hangmax = i;
        }
    }
    printf("\ncac hang co tong lon nhat la: ");
    for(int i = 1; i <= m; i++){
        if(sum[i] == maxhang){
            printf("%d ", i);
        }
    }

    //tich gia tri duong matrix
    float tichduong = tinhtichduong(m, n, a);
    if(tichduong == 0){
        printf("\nkhong co gia tri duong");
    }
    else{
        printf("\ntich gia tri duong cua ma tran la: %.1f", tichduong);
    }
}
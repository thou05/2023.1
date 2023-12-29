#include <stdio.h>

void nhap(int m, int n){
    double a[m][n];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            printf("nhap a[%d][%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
}
void xuat(int m, int n){
    double a[m][n];
    for(int i = 1; i <= m; i++){
        printf("\n");
        for(int j = 1; j <= n; j++){
            printf("%.1lf ", a[i][j]);
        }
    }
}
double min(int m, int n){
    double a[m][n];
    double min = a[1][1];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] < min) min = a[i][j];
        }
    }
    return min;
}
double max(int m, int n){
    double a[m][n];
    double max = a[1][1];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] > max) max = a[i][j];
        }
    }
    return max;
}

int main(){
    int m, n;
	printf("nhap hang m va cot n: ");
	scanf("%d%d", &m, &n);
	double a[m][n];
	nhap(m,n);
	xuat(m,n);
    double MIN = min(m, n);
    printf("\ngia tri nho nhat trong ma tran la: %.1lf", MIN);
    double MAX = max(m, n);
    printf("\ngia tri lon nhat trong ma tran la: %.1lf", MAX);
}
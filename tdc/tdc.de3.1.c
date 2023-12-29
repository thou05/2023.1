#include <stdio.h>
#include <math.h>

void nhap(int n, int a[100]){
    for(int i = 1; i <= n; i++){
        printf("nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

int trungbinhcong(int n, int a[100], int x){
    int sum = 0, dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > x){
            sum += a[i];
            dem++;
        }
    } 
    float tbc;
    if(dem == 0){
        tbc = 0;
    }
    if(dem != 0){
        tbc = (float) sum / dem;
    }
    return tbc;
}
int tangdan(int n, int a[100]){
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(a[i + 1] < a[i]){
            check = 1;
        }
    }
    return check;
}

int main(){
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    int a[100];
    nhap(n, a);
    int x;
    printf("\nnhap x: ");
    scanf("%d", &x);
    float tbc = trungbinhcong(n , a, x);
    if(tbc == 0){
        printf("\nkhong co so co gia tri lon hon x");
    }
    else if(tbc != 0){
        printf("\ntrung binh cong cac so lon hon x la: %.1f", tbc);
    }
    float daytang = tangdan(n, a);
    if(daytang == 0){
        printf("\nday la day tang dan");
    }
    else if(daytang == 1){
        printf("\nday khong la day tang dan");
    }
}
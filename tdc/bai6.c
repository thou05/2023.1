#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("nhap bac da thuc n: ");
	scanf("%d", &n);
    double a[n];
    for(int i = 0; i <= n; i++){
        printf("he so thu %d: ", i);
        scanf("%lf", &a[i]);
    }
    //a
    for(int i = 0; i <= n; i++){
        printf("%.2lf ", a[i]);   
    }
    //b
    int dem = 0;
    for(int i = 0; i <= n; i++){
        if(a[i] == 0){
            dem ++;
            printf("%.2lf", a[i]);
        }
    }
    //c
    double max, max2, tmp;
    max = a[0];
    for(int i = 0; i <= n; i++){
        if(a[i] > max){
            tmp = max;
            max = a[i];
            max2 = tmp;
        }
    }
    printf("\nhai he so lon nhat la: %.2lf %.2lf", max, max2);
    double x0;
    printf("\nnhap x0: ");
    scanf("%lf", &x0);
    double s = 0;
    for(int i = 1; i <= n; i++){
    	s += a[i] * i * pow(x0,i - 1);
    }
    printf("gia tri dao ham cua da thuc la: %.2lf", s);
}

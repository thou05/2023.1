#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("nhap bac n: ");
	scanf("%d", &n);
	double x;
	printf("\nnhap x: ");
	scanf("%lf", &x);
	double a[n];
	for(int i = 0; i <= n; i++){
		printf("\nnhap he so thu %d: ", i);
		scanf("%lf", &a[i]);
	}
	//tinh s
	double p = 0, p2 = 0;
	for(int i = 0; i <= n; i++){
		p += a[i] * pow(x, i);
	}
	for(int i = 1; i <= n; i++){
		p2 += a[i] * i * pow(x, i - 1);
	}
	double s = x + sqrt(p + p2 + 2023);
	printf("\ngia tri cua s la: %.2lf ", s);
	
	//hieu p - q
	int m;
	printf("\nnhap bac m: ");
	scanf("%d", &m);
    double b[m];
    for(int i = 0; i <= m; i++){
        printf("\nnhap he so da thuc Q thu %d: ", i);
        scanf("%lf", &b[i]);
    }
    double hieu;
    if(m > n){
        for(int i = 0; i <= m; i++){
            hieu = a[i] - b[i];
            printf("\nhe so da thuc hieu p - q bac %d la: %.2lf", i, hieu);
        }
    }else if(n > m){
        for(int i = 0; i <= n; i++){
            hieu = a[i] - b[i];
            printf("\nhe so da thuc hieu p - q %d la: %.2lf", i, hieu);
        }
    }
    
    //he so lon nhat 
    double max = a[0];
    for(int i = 0; i <= n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("\nhe so lon nhat da thuc p la: %.2lf", max);
    
    //tong he so am
    double sum = 0;
    for(int i = 0; i <= n; i++){
        if(a[i] < 0){
            sum += a[i];
        }
    }
    printf("\ntong he so am trong da thuc p la: %.2lf", sum);
}

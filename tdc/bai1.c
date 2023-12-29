#include <stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	double a[n];
	for(int i = 0; i < n; i++){
		printf("\nnhap phan tu thu %d: ", i);
		scanf("%lf",&a[i]);
	}
	
	//tinh tong
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	printf("\ntong cac phan tu trong day la %.2lf", sum);
	
	//tim gia tri lon nhat
	double max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("\ngia tri lon nhat cua day la %.2lf", max);
	
	//nhap x kiem tra thuoc day khong
	double x;
	int check = 0;
	printf("\nnhap x: ");
	scanf("%lf", &x);
	for(int i = 0; i < n; i++){
		if(x == a[i]){
			check = 1;
			break;
		}else{
			check = 0;
		}
	}
	if(check == 1){
		printf("\n%.2lf co trong day so", x);
	}else{
		printf("\n%.2lf khong co trong day so", x);
	}
	//tbc phan tu trong [b,c]
	double b, c, sum2 = 0;
	int dem = 0;
	printf("\nnhap gia tri b va c: ");
	scanf("%lf%lf", &b, &c);
	if(c > b){
		int tmp = b;
		b = c;
		c = tmp;
	}
	for(int i = c; i <= b; i++){
		sum2 += i;
		dem++;
	}
	printf("tbc la: %.2lf", sum2 / dem);
}

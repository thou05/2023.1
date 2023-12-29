#include <stdio.h>
#include <math.h>

void b1(){
	int a, b;
	printf("nhap gia tri cho a va b: ");
	scanf("%d%d", &a, &b);
	int s = a + b;
	printf("\nTong hai so a va b la : %d\n\n", s);
}

void b2(){
	double x, y;
	printf("Nhap gia tri x va y: ");
	scanf("%lf%lf", &x, &y);
	double mu = pow(x, y);
	printf("\nGia tri x mu y la: %.2lf\n\n", mu);
}

void b3(){
	int a, b, c;
	printf("nhap gia tri 3 canh: ");
	scanf("%d%d%d", &a, &b, &c);
	int chuvi = a + b + c;
	printf("\nchu vi la: %d\n", chuvi);
}

int main(){
    b1();
    b2();
	b3();
}

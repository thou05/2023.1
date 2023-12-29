#include <stdio.h>
#include <math.h>

int main(){
	int n; 
	printf("bac da thuc: ");
	scanf("%d", &n);
	float a[n];
	
	//nhap da thuc s = 2023 + p + p2
	for(int i = 0; i <= n; i++){
		printf("nhap he so bac %d:", i);
		scanf("%f", a[i]);
	}
	float x;
	printf("nhap x:");
	scanf("%f", &x);
	int p = 0, p2 = 0;
	for(int i = 0; i <= n; i++){
		p += a[i] * pow(x,i);
	}
	for(int i = 1; i <= n; i++){
		p2 += a[i] * i * pow(x, i - 1);
	}
	float s = 2023 + p + p2;
	printf("tong la %.2f", s);
}

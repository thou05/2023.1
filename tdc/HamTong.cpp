#include<stdio.h>
int tong(int a, int b){
	int s = a + b;
	return s;
}
void tong1(int a, int b){
	int s = a + b;
	printf("Gia tri la: %d", s);
}
void tong2(){
	int a, b;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d", &a, &b);
	int s = a+b;
	printf("Gia tri la: %d", s);
}
int tong3(){
	int a, b;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d", &a, &b);
	int s = a+b;
	return s;
}
main(){
	int s = tong3();
	printf("tong la: %d", s);
}

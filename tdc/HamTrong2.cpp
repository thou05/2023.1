#include<stdio.h>
int tong(int *a, int *b){
	*a = *a + 7;
	int s = *a + *b;
	return s;
}
int tong1(int &a, int &b){
	a = a + 7;
	int s = a + b;
	return s;
}
main(){
	int a = 5, b = 7;
//	printf("Nhap 2 so a va b: ");
//	scanf("%d%d", &a, &b);
	//int s = tong(&a, &b);
	int s = tong1(a, b);
	printf("\ngia tri cua a la: %d", a);
	printf("\nGia tri la: %d", s);
}

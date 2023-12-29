#include <stdio.h>
#include <string.h>

void day(){
	char a[] = "ha noi";
	printf("%s", a);
}

void baitap(){
	int a, b;
	char x;
	printf("nhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("nhap ki tu: ");
	scanf(" %c", &x);
	//%c co dau cach
	switch(x){
		case '+' : 
			printf("%d", a + b);
			break;
		case '-' : 
			printf("%d", a - b);
			break;
		case '*' : 
			printf("%d", a * b);
			break;
		case '/' : 
			printf("%.2f", (float)a / b);
			break;
		
	}
}

void namnhuan(){
	int nam;
	printf("nhap nam: ");
	scanf("%d", &nam);
	if(n % 4 == 0 && n % 100 != 0){
		printf("nam nhuan");
	}
	
}


int main(){
	baitap();
}

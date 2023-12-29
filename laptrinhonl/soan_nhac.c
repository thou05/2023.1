#include <stdio.h>

int main(){
	int a[100];
	for(int i = 0; i < 8; i++){
		scanf("%d", &a[i]);
	}
	int giam = 0, tang = 0;
	for(int i = 0; i < 7; i++){
		if(a[i] > a[i+1]){
			giam ++;
		}
		if(a[i] < a[i+1]){
			tang++;
		}
	}
	if(tang == 7){
		printf("TANG");
	}else if(giam == 7){
		printf("GIAM");
	}
	else {
		printf("KHONGBIET");
	}
}

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int tich = 1, check = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			tich = tich * a[i];
			check = 1;
		}
	}
	if(check == 0){
		printf("khong co phan tu am");
	}else{
		printf("%d", tich);
	}
}

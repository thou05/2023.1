#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		printf("nhap phan tu thu %d : ", i);
		scanf("%d", &a[i]);
	}
	
	//sap xep day so
	for(int i = 0; i < n - 1; i++){
		for(int j=i+1; j < n; j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\nday so sau khi sap xep la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
}

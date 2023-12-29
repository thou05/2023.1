#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int s =0, dem = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
		dem++;
	}
	int tbc = s / dem;
	int nho = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < tbc){
			nho++;
		}
	}
	printf("%d %d", tbc, nho);
}

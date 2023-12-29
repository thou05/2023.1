#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int dem1 = 0, dem2 = 0, le = 0, chan = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			le += a[i];
			dem1++;
		}
		if(a[i] % 2 == 0){
			chan += a[i];
			dem2++;
		}
	}
	if(le == 0){
		printf("0\n%d", chan/dem2);
	}
	else if(chan == 0){
		printf("%d\n0", le/dem1);
	}
	else if(le == 0 && chan == 0){
		printf("0\n0");
	}
	else{
	printf("%d\n%d", le/dem1, chan/dem2);
	}
}

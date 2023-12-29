#include <stdio.h>

int main(){
	int n, c, d;
	scanf("%d%d%d", &n, &c, &d);
	int a[n];
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] >= (-1)*c && a[i] <= d) dem ++;
	}
	printf("%d\n", dem);
	int check = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > a[i+1]){
			check = 1;
		}
	}
	if(check == 0){
		printf("YES");
	}else{
		printf("NO");
	}
}

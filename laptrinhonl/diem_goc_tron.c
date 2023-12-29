#include <stdio.h>

int main(){
	int r, n;
	scanf("%d%d", &r, &n);
	int x[n], y[n];
	for(int i = 0; i < n; i++){
		scanf("%d%d", &x[i], &y[i]);
	}
	int kc, tmp, x_max = x[0], y_max = y[0];
	int max = x[0] * x[0] + y[0] * y[0];
	for(int i = 1; i <= n; i++){
		kc = x[i] * x[i] + y[i] * y[i];
		if(kc > max){
			max = kc;
			x_max = x[i];
			y_max = y[i];
		}
	}
	if(x_max <= r && y_max <= r){
		printf("%d %d", x_max, y_max);
	}
	else{
		printf("0");
	}
	
	
	
}

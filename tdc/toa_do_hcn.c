#include <stdio.h>

//diện tích hcn nhỏ nhất có 2 cạnh song song với trục tọa độ chứa tất các các điểm

int main(){
	int n;
	scanf("%d", &n);
	float x[n], y[n];
	for(int i = 0; i< n; i++){
		scanf("%f%f", &x[i], &y[i]);
	}
	float x_max = x[0], x_min = x[0], y_max = y[0], y_min = y[0];
	for(int i = 0; i < n; i ++){
		if(x[i] > x_max){
			x_max = x[i];
		}
		if(y[i] > y_max){
			y_max = y[i];
		}
		if(x[i] < x_min){
			x_min = x[i];
		}
		if(y[i] < y_min){
			y_min = y[i];
		}
	}
	float cd = x_max - x_min;
	float cr = y_max - y_min;
	printf("\nDien tich la %.2f", cd * cr);
}

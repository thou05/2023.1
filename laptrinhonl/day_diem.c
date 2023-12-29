#include <stdio.h>

int main(){
	int n;
	printf("Nhap day diem: ");
	scanf("%d", &n);
	float x[n], y[n];
	
	// nhap day diem
	for(int i = 0; i < n; i++){
		printf("nhap diem thu %d: ", i);
		scanf("%f%f", &x[i], &y[i]);
	}
	
	//xuat
	for(int i = 0; i < n; i++){
		printf("%.2f%.2f", x[i], y[i]);
	}
	
	//dem so diem thuoc III
	int d = 0;
	for(int i = 0; i < n; i++){
		if(x[i]<0 && y[i]<0){
			d = d + 1;
		}
	}
	printf("so diem la: %d", d);
	
	//tim diem gan goc toa do nhat
	float m = x[0] * x[0] + y[0] * y[0];
	int vtri = 0;
	for(int i = 1; i < n; i++){
		float kc = x[i] * x[i] + y[i] * y[i];
		if(kc < m){
			m = kc;
			vt = i;
		}
	}
	printf("\nDiem gan O nhat la : (%.2f, %.2f)", x[vt], y[vt]);
	
}

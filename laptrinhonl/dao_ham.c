#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	float a[n], x, p;
	for(int i = 0; i < n+1; i++){
		scanf("%f", &a[i]);
	}
	scanf("%f", &x);
	for(int i = 1; i <= n; i++){
	    p += (i*a[i]*pow(x,(i-1)));
	}
	printf("%.3f", p);
	
}

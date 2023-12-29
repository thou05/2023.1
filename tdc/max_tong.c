#include <stdio.h>
#define int long
main(){
	int n;
	scanf("%ld", &n);
	int a[n+5];
	for(int i = 1; i <= n; i++){
		scanf("%ld", &a[i]);
	}
	double max = 1.0*a[1]/n ,s;
	for(int i = 2; i <= n; i++){
		s = 1.0*a[i] / (n - i + 1);
		max = max > s ? max : s;
	}
	int b = 0;
	int cnt = 0;
	for(int i = 1; i < n; i++){
		b += (a[i] + a[i+1]);
		cnt ++;
	}
	if(cnt) printf("%.2lf\n%ld", max, b); 
	else printf("%.2lf\n%ld",max,a[1]);
}

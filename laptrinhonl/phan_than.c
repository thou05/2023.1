#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long a = 1, dem = 0;
	while(a < n){
		a = a + a;
		dem++;
	}
	printf("%lld", dem);
}

#include <stdio.h>

int main(){
	int n; 
	long long s, f1 = 1, f2 = 1;
	scanf("%d", &n);
	while(n == 1 || n == 2){
		scanf("%d", &n);
	}
	for(int i = 3; i <= n; i++){
		s = f1 + f2;
		f1 = f2;
		f2 = s;
	}
	printf("%lld", s);
}

#include <stdio.h>
#include <math.h>

int main(){
	int m, n, s;
	scanf("%d%d", &m, &n);
	for(int i = 1; i < n; i++){
		s += pow(i,m);
	}
	printf("%d", s);
}

#include <stdio.h>

int main(){
	int n, s, t, min;
	scanf("%d%d%d", &n, &s, &t);
	int chung = s + t - n;
	min = n - chung;
	printf("%d", min);
}

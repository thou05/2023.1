#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int result = 1;
	for(int i = 1; i <= m; i++){
		result = (result * n ) % 10;
	}
	printf("%d", result);
}

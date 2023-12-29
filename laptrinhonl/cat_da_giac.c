#include <stdio.h>

int main(){
	int n, k, sum = 0;
	scanf("%d%d", &n, &k);
	for(int i = 0; i< k; i++){
		int x;
		scanf("%d", &x);
		sum += x;
	}
	if(sum == n + 2*(k-1)){
		printf("YES");
	}else{
		printf("NO");
	}	
}

// sum = n + 2 * k

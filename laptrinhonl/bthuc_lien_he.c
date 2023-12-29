#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, q;
	scanf("%d%d", &a, &b);
	for(int r = 0; r <= abs(b); r++){
		if( (a - r) % b == 0){
		    q = (a - r) / b;
			printf("%d %d", q, r);
		}
	} 
}

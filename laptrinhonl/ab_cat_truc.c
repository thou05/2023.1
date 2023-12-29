#include <stdio.h>

int main(){
	float xa, ya, xb, yb;
	scanf("%f%f%f%f", &xa, &ya, &xb, &yb);
	if((xa * xb) < 0 && (ya * yb) < 0){
		printf("YES");
	}else{
		printf("NO");
	}
}

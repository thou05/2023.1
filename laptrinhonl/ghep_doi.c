#include <stdio.h>

int main(){
	int x, y, xy, yy;
	scanf("%d%d", &x, &y);
	if(x < y){
		int temp = x;
		x = y;
		y = temp;
	}
	xy = y;
	if((x - xy) > 1){
		yy = (x - xy) / 2;
	}else{
		yy = 0;
	}
	printf("%d %d", xy, yy);
}

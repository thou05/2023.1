#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int d, r, s;
	int max1 = 0, max2 = 0, d1 = 0, r1 = 0, d2 = 0, r2 = 0 ;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &d, &r);
		s = d * r;
        if(s > max1){
			max2 = max1;
			d2 = d1;
			r2 = r1; 
			max1 = s;
			d1 = d;
			r1 = r;
		}else if(s > max2 && s < max1){
			max2 = s;
			d2 = d;
			r2 = r;
		}
	}
	if(max2 == 0){
		printf("NO");
	}else{
		printf("%d %d", d2, r2);
	}
}

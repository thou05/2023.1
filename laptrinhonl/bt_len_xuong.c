#include <stdio.h>

int main(){
	int n, u = 0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		if(i%2!=0){
			u += i;
		}else{
			u -= i;
		}
	}
	printf("%d", u);
}	

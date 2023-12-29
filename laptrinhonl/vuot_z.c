#include <stdio.h>

int main(){
	int x, z;
	int tong = 0, dem = 0;
	scanf("%d%d", &x, &z);
	while(z <= x){
		scanf("%d", &z);
	}
	for(int i = x; tong <= z; i ++){
		tong += i;
		dem++;
	}
	printf("%d", dem);

}

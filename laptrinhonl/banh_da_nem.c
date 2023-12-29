#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
	int so_lan = n / 9;
	if( n % 9 > 0){
	    so_lan += 1;
	}
	printf("%d", so_lan);
}

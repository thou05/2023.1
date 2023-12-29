#include <stdio.h>
    
int main(){
	int x, a[x], dem = 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
    	a[i] += a[i-1] + i;
        x = a[i];
        dem++;
	}
    printf("%d", dem);
}

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int q;
    scanf("%d", &q);
    while(q--){
    	int x;
    	scanf("%d", &x);
    	x--;
    	int row = x/n;
    	int col = x - row * n;
    	printf("%d ", col * n + row + 1);
    }
}



// a[i][j] = a[i*n+j+1]

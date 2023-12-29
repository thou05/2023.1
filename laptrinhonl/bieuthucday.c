#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int s1 = 0, s2 = 0, s3 = 0;
    for(int i = 1; i <= n; i++){
        s1 += pow(a[i], 2);
        
    }
}
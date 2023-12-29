#include <stdio.h>
    
int main(){
    int m, n;
    while(1){
        scanf("%d%d", &m, &n);
        if(m <= 0 || n <= 0){
            break;
        }
        if(m > n){
            int temp = m;
            m =n;
            n = temp;
        }
        int sum = 0;
        for(int i = m; i <= n; i++){
            printf("%d", i);
            sum += i;
        }
        printf("Tong=%d\n", sum);
    }
}

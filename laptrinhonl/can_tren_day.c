#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	double a[n], s1 = 0.0, s2 = 0.0;
    for(int i = 0; i < n; i++){
        scanf("%lf", &a[i]);
    }
	for(int i = 0; i < n; i++){
    	if(a[i] < 0){
    	    printf("Khong tinh duoc S1\nKhong tinh duoc S2");
    	    break;
    	}else{
    		for(int i = 1; i < n; i = i + 2){
    			s1 = sqrt((a[i+1]) + sqrt(a[i]));
    		}
    		for(int i = n; i > 1; i = i - 2){
    			s2 = sqrt((a[i - 1]) + sqrt(a[i]));
    		}
    	}	
	}
	printf("%.3lf\n%.3lf", s1, s2);
}

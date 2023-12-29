#include <stdio.h>

int main(){
	int n;
	printf("nhap so diem: ");
	scanf("%d", &n);
	double x[n], y[n];
	for(int i = 0; i < n ; i++){
	    printf("nhap diem thu %d: ", i);
	    scanf("%lf%lf", &x[i], &y[i]);
	}
	
	//in day 
	for(int i = 0; i < n; i++){
	    printf("(%.2lf,%.2lf) ", x[i], y[i]);
	}
	
	//dem so diem
	int dem = 0;
	for(int i = 0; i < n; i++){
	    if(x[i] > 0 && y[i] > 0){
	        if(x[i] == y[i]){
	            dem++;
	        }
	    }
	}
	printf("\nso diem nam tren duong phan giac goc phan tu thu nhat la: %d", dem);
	
	//cat truc hoanh
	int dem2 = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
	    	if(y[i] * y[j] < 0){
	        	dem2++;
	        }
	    }
	}
	printf("\nso doan thang cat truc hoanh la: %d", dem2);
}

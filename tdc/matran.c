#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n][n];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("\nnhap phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	//in ra man hinh dang bang
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	//tim min cua ma tran
	int min = a[1][1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] < min){
				min = a[i][j];
			}
		}
	}
	printf("\nmin cua ma tran la: %d", min);
	
	//min cac phan tu am
	int check = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] < min && a[i][j] < 0){
				min = a[i][j];
				check = 0;
			}
		}
	}
	if(check = 0){
		printf("\nmin cac phan tu am la: %d", min);
	}else{
		printf("\nkhong co phan tu am");
	}
	
	//tong tung cot va cot max
	int sum_max = 0, cot_max = 1, sum = 0;
	for(int i = 1; i <= n; i++){
	    sum += a[i][i];
	    printf("\ntong cot %d la: %d", i, sum);
	    if(sum > sum_max){
	        sum_max = sum;
	        cot_max = i;
	    }
	}
	printf("\ncot co tong lon nhat la cot: %d", cot_max);
	
	//max tung hang
	int sum_hang;
	for(int i = 1; i <= n; i++){
	    sum_hang = 0;
	    for(int j = 1; j <= n; j++){
	        sum_hang += a[i][j];
	    }
	    printf("\ntong hang %d la: %d", i, sum_hang);
	}
	
	//dem phan tu duong lon hon 10
	int dem = 0;
	for(int i = 1; i <= n; i++){
	    for(int j = 0; j <= n; j++){
	        if(a[i][j] > 0 && a[i][j] > 10){
	            dem++;
	        }
	    }
	}
	printf("\nso cac phan tu duong lon hon 10 la: %d", dem);
	
	//ma tran tam giac duoi va tich cac phan tu am
	
}























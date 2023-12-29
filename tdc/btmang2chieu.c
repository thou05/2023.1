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
	if(check == 0){
		printf("\nmin cac phan tu am la: %d", min);
	}else{
		printf("\nkhong co phan tu am");
	}
	
	//tong tung cot va cot max
	int max,sumcot[n+1];
	
	for(int i = 1; i <= n; i++){
	    sumcot[i] = 0;
	    for(int j = 1; j <= n; j++){
	    	sumcot[i] += a[i][j];
	    }
	    printf("\ntong cot %d la: %d", i, sumcot[i]);
	}
	max = sumcot[1];
	for(int i = 1; i <= n; i++){
		if(sumcot[i]>max){
			max = sumcot[i];
		}
	}
	printf("\ncot co tong lon nhat la cot: ");
	for(int i = 1; i <= n; i++){
		if(sumcot[i] == max){
			printf("%d ", i);
		}
	}
	
	
	//max tung hang
	int maxhang;
	for(int i = 1; i <= n; i++){
	    maxhang = a[i][1];
	    for(int j = 1; j <= n; j++){
	        if(a[i][j] > maxhang){
	            maxhang = a[i][j];
	        }
	    }
	    printf("\nmax hang %d la: %d", i, maxhang);
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
	int check2 = 1;
	for(int i = 1; i <= n; i++){
	    for(int j = i + 1; j <= n; j++){
	        if(a[i][j] != 0) {
	            check2 = 0;
	            break;
	        }
	    }
	}
	if(check2 == 1){
	    printf("\nla ma tran tam giac duoi");
	}else{
	    printf("\nkhong la ma tran tam giac duoi");
	}
	int tich_am = 1;
	int check3 = 1;
	for(int i = 1; i <= n; i++){
	    if(a[i][n - i + 1] < 0){
	        tich_am *= a[i][n - i + 1];
	        check3 = 0;
	    }
	}
	if(check3 == 0){
	    printf("\ntich am duong cheo phu la: %d", tich_am);
	}else{
	    printf("\nduong cheo phu khong co phan tu am");
	}
	//tbc phan tu lon hon 10
	int sum2 = 0, dem2 = 0;
	for(int i = 1; i <= n; i++){
	    for(int j = 1; j <= n; j++){
	        if(a[i][j] > 10){
	            sum2 += a[i][j];
	            dem2++;
	        }
	    }
	}
	if(dem2==0){
		printf("\nkhong co phan tu lon hon 10");
	}else{
		printf("\ntbc phan tu lon hon 10: %.1f", (float) sum2 / dem2);
	}
	
	//dem phan tu trong doan [5;30]
	int dem3 = 0;
    for(int i = 1; i <= n; i++){
	    for(int j = 1; j <= n; j++){
	        if(a[i][j] >= 5 && a[i][j] <= 30){
	            dem3++;
	        }
	    }
    }
    printf("\nso phan tu co trong doan [5;30] la: %d", dem3);
	
	//tong tung hang va tong max
	int sum_h[n+1];
	for(int i = 1; i <= n; i++){
	    sum_h[i] = 0;
	    for(int j = 1; j <= n; j++){
	        sum_h[i] += a[i][j];
	    }
	    printf("\ntong hang %d la: %d", i, sum_h[i]);
	}
	int max2 = sum_h[1];
	for(int i = 1; i <= n; i++){
	    if(sum_h[i] > max2){
	        max = sum_h[i];
	    }
	}
	printf("\ntong hang lon nhat la: %d", max);
	//tbc phan tu duong cot le
	int sum4 = 0, dem4 = 0, check4 = 1;
	for(int i = 1; i <= n; i=i+2){
	    for(int j = 1; j <= n; j++){
	        if(a[i][j] > 0){
	            sum4 += a[i][j];
	            dem4 ++;
	            check = 0;
	        }
	    }
	}
	if(check == 0){
	    printf("\ntbc phan tu duong trong cot le la: %.1f", (float) sum4 / dem4 );
	}else{
	    printf("\ncot le khong co phan tu duong");
	}
	//ktra matran tam giac tren
	int check5 = 1;
	for(int i = 2; i <= n; i++){
	    for(int j = 1; j <= i - 1; j++){
	        if(a[i][j] != 0){
	            check5 = 0;
	            break;
	        }
	    }
	}
	if(check5 == 1){
	    printf("\nla ma tran tam giac tren");
	}else{
	    printf("\nkhong la ma tran tam giac tren");
	}
	
	//tbc phan tu tren duong cheo phu
	int sum6 = 0;
	for(int i = 1; i <= n; i++){
	    sum6 += a[i][n-i+1];
	}
	printf("\ntbc phan tu tren duong cheo phu la: %.1f", (float)sum6/n);
	
	//ma tran doi xung
	int check6=1;
	for(int i = 1; i <= n; i++){
	    for(int j = 1; j <= n; j++){
	        if(a[i][j] != a[j][i]){
	            check6 = 0;
	        }
	    }
	} 
	if(check6 == 1){
	    printf("\nla ma tran doi xung");
	}else{
	    printf("\nkhong la ma tran doi xung");
	}
	
	//max phan tu duoi duong cheo chinh
	int max6=a[1][2];
	for(int i = 1; i <= n; i++){
	    for(int j = 2; j<= n - 1; j++){
	        if(a[i][j] > max6){
	            max6 = a[i][j];
	        }
	    }
	}
	printf("\nmax phan tu duoi duong cheo chinh la: %d", max6);
	
	//tong hang nao co gia tri bang nhau
	int dem7 = 0;
	for(int i = 1; i < n; i++){
	    for(int j=i+1; j <= n; j++){
	        if(sum_h[i]==sum_h[j]){
	            printf("\nma tran co tong hang bang nhau la %d va %d", i, j);
	            dem7++;
	        }
	    }
	}
	if(dem7 == 0){
		printf("\nma tran khong co hang nao bang nhau");
	}
	//cach2 - dung mang danh dau 
	int dem8[100] = {0}; //dem so lan xuat hien cua cac phan tu
	for(int i = 1; i <= n; i++){
		dem8[sum_h[i]]++;
	}
	printf("\ncac hang co tong bang nhau la: ");
	for(int i = 1; i < 100; i++){
		if(dem8[i] > 1){
			printf("\ntong gia tri xuat hien nhieu lan la: %d", i);
			for(int j = 1; j <= n; j++){
				if(i == sum_h[j]){
					printf("\ncac hang co tong bang nhau la: %d", j);
				}
			}
		}
	}
}








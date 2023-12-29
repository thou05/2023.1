#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	// in ra man hinh
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d:", i);
		scanf("%d", &a[i]);
	}
	
	// tinh tong day so
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	printf("sum = %d:\n", sum);
	
	//tinh tbc cac phan tu chan, le, am, >...
	int s = 0, dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			s += a[i];
			dem++;
		}
	}
	if(dem == 0){
		printf("\nDay nay khong co so chan");
	}
	else{
		printf("tbc phan tu chan la %lf:\n", s * 1.0 / dem);
	}
	
	//note: tot nhat bai nao cung bien luan cho chac
	
	// tim max day so
	int max = a[0]; 
	//note: max = 0 la sai, có thể gán số bé nhất trong phạm vi KDL đó INT_MIN, LONG_MIN nhưng phải thêm thư viện <limits.h>
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("max la %d:\n", max);
	
	//tim max co dk
	//tim max chan
	//note: tim 1 so thoa man dk va gan cho m
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			max = a[i];
			break;
		}
	}
	//tim max
	max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max && a[i] % 2 == 0){
			max = a[i];
		}
	}
	printf("max chan la %d:", max);
	
	//tim max bieu thuc
	// meo : nhin phan tu cuoi cung va thay i vao thu
	max = a[0] * a[0];
	for(int i = 0; i < n; i++){
		if(a[i] * a[i] > max){
			max = a[i] * a[i];
		}
	}
	printf("max bieu thuc %d:", max);
	
	// ktra xem co tang dan khong
	// cach 1: dem cac phan tu thoa man
	int demm = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] < a[i + 1]){
			demm += 1;
		}
	}
	if(demm == n - 1){
		printf("Day nay tang dan");
	}else{
		printf("Day nay khong tang dan");
	}
	
	//cach 2(phu hop cntt hon)
	int check = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] >= a[i+1]){ //khong thoa man
			check = 1;
			break;
		}
	}
	if(check == 0){
		printf("Day la day tang dan");
	}else{
		printf("Day la day khong tang dan");
	}
	
	//tm cac cap so lien tiep thoa man tinh chat tich chia het cho tong
	for(int i = 0; i < n - 1; i++){
		if(a[i] * a[i+1] % (a[i] + a[i+1]) == 0){ //khong thoa man
			printf("cap so thoa man la: %d %d", a[i], a[i+1]);
		}
	
	// tim bo ba so lien tiep thoa man tinh chat lap thanh csc
	//neu  khong lien tiep phai dung vong lap
	for(int i = 0; i < n - 2; i++){
		int so1 = a[i];
		int so2 = a[i+1];
		int so3 = a[i+2];
		if(so1 + so2 == 2*so2 || so1 + so2 == 2*so3 || so2 + so3 == 2*so1){
			printf("bo 3 so la: %d %d %d", so1, so2, so3);	
		}
	}

	// chu y pham vi ton tai cua bien
	//printf("so 1 la: %d", so1); -> loi vi ko trong pham vi cua for
	
	//day toan chan
	check = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			check = 1;
			break;
		}
	}
	if(check == 0){
		printf("day toan chan");
	}
	
}

	















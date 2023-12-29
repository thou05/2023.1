#include<stdio.h>
#include<string.h>
typedef struct ThiSinh{
	int maSV;
	char tenSV[50];
	float dtb;
	char truong; // char truong[2];
};
main(){
	int n;
	printf("Nhap n thi sinh: ");
	scanf("%d", &n);
	ThiSinh ts[n+1]; // int a[100];
	for(int i=0;i<n;i++){
		printf("Nhap thi sinh thu: %d\n", i);
		printf("Nhap ma SV: ");
		scanf("%d", &ts[i].maSV);
		printf("Nhap ten SV: ");
		fflush(stdin);
		gets(ts[i].tenSV);
		printf("Nhap diem trung binh: ");
		scanf("%f", &ts[i].dtb);
		printf("Nhap truong: ");
		fflush(stdin);
		scanf("%c", &ts[i].truong);
	}
	// in ra man hinh
	for(int i=0;i<n;i++){
		printf("\n%d\t%s\t%.2f\t%c", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
	}
	// tim cac SV co DTB lon hon 5 cua truong B
	for(int i=0;i<n;i++){
		if(ts[i].dtb > 5 && ts[i].truong == 'B'){
			printf("\n%d\t%s\t%.2f\t%c", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
		}
	}
	int dA = 0, dB = 0, dC = 0;
	for(int i=0;i<n;i++){
		if(ts[i].truong == 'A'){
			dA=dA+1;
		}
		if(ts[i].truong == 'B'){
			dB=dB+1;
		}
		if(ts[i].truong == 'C'){
			dC=dC+1;
		}
	}
	// tim Sv co diem cao nhat 
	float max = ts[0].dtb;
	for(int i=0;i<n;i++){
		if(ts[i].dtb > max){
			max = ts[i].dtb;
		}
	}
	// tim cac SV co diem cao nhat
	for(int i=0;i<n;i++){
		if(ts[i].dtb == max){
			printf("\n%d\t%s\t%.2f\t%c", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
		}
	}
	// tim Sv cua truong B co diem cao nhat
	// tim 1 SV cua truong B
	for(int i=0;i<n;i++){
		if(ts[i].truong == 'B'){
			max = ts[i].dtb;
		}
	}
	if(dB == 0){
		printf("Khong co thi sinh truong B");
	}
	else{
		for(int i=0;i<n;i++){
			if(ts[i].truong == 'B' && ts[i].dtb > max){
				max = ts[i].dtb;
			}
		}
		// in ra cac SV truong B ma co DTB max
		for(int i=0;i<n;i++){
			if(ts[i].dtb == max && ts[i].truong == 'B'){
				printf("\n%d\t%s\t%.2f\t%c", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
			}
		}
	}
	
	
}

#include<stdio.h>
typedef struct SinhVien{
	char maSV[30];
	char tenSV[100];
	float diemToan;
	float diemTin;
};
main(){
	// nhap n sinh vien
	int n;
	SinhVien sv[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Nhap sinh vien thu %d: \n", i);
		// nhap ma sinh vien
		printf("Nhap ma SV: ");
		fflush(stdin); //xóa bo nho dem
		gets(sv[i].maSV);
		printf("Nhap ten SV: ");
		fflush(stdin); //xóa bo nho dem
		gets(sv[i].tenSV);
		printf("Nhap diem toan: ");	
		scanf("%f", &sv[i].diemToan);
		printf("Nhap diem tin: ");	
		scanf("%f", &sv[i].diemTin);
	}
	for(int i=0;i<n;i++){
		printf("\n%s\t%s\t%.2f\t%.2f", sv[i].maSV, sv[i].tenSV, sv[i].diemToan, sv[i].diemTin);
		printf("\nDTB: %.2f", (sv[i].diemToan+sv[i].diemTin)/2);
	}
	
	
	
}

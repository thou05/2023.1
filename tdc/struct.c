	#include <stdio.h>
	struct sinhVien{
		char maSV[30];
		char tenSV[100];
		float diemToan;
		float diemTin;
	};
	main(){
		struct sinhVien sv;
		//nhap ma sinh vien
		printf("Nhap ma sinh vien: ");
		gets(sv.maSV);
		printf("Nhap ten sv: ");
		gets(sv.tenSV);
		printf("Nhap diem toan: ");
		scanf("%f", &sv.diemToan);
		printf("Nhap diem tin: ");
		scanf("%f", &sv.diemTin);

		printf("%s %s %.2f %.2f", sv.maSV, sv.tenSV, sv.diemToan, sv.diemTin);
	}

#include<stdio.h>
#include<string.h>
typedef struct ThiSinh{
	int maSV;
	char tenSV[50];
	float dtb;
	char truong[2]; // char truong;
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
		gets(ts[i].truong);
		//scanf("%s", &ts[i].truong);
	}
	// in ra man hinh
	for(int i=0;i<n;i++){
		printf("\n%d\t%s\t%.2f\t%s", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
	}
	// tim cac SV co DTB lon hon 5 cua truong B
	for(int i=0;i<n;i++){
		if(ts[i].dtb > 5 && strcmp(ts[i].truong, "B")==0){
			printf("\n%d\t%s\t%.2f\t%s", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
		}
	}
	// sap xep danh sanh thi sinh tang dan theo DTB
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ts[i].dtb > ts[j].dtb){
				ThiSinh t = ts[i];
				ts[i] = ts[j];
				ts[j] = t;
			}
		}
	}
	// in ra man hinh
	printf("\ndanh sach sau khi hoan vi la: \n");
	for(int i=0;i<n;i++){
		printf("\n%d\t%s\t%.2f\t%s", ts[i].maSV, ts[i].tenSV, ts[i].dtb, ts[i].truong);
	}
	// thong ke so thi sinh moi truong
	int dA = 0, dB = 0, dC = 0;
	for(int i=0;i<n;i++){
		if(strcmp(ts[i].truong, "A")==0){
			dA=dA+1;
		}
	}
	// truong nao co nhieu thi sinh nhat
	// tim SV co diem cao nhat cua truong B
}

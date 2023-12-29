#include<stdio.h>
#include<math.h>
typedef struct Diem{
	float x, y;
};
main(){
	int n;
	Diem d[100];
	printf("Nhap n la so diem: ");
	scanf("%d", &n);
	// nhap
	for(int i=0;i<n;i++){
		printf("Nhap diem thu %d: ", i);
		scanf("%f%f", &d[i].x, &d[i].y);
	}
	// xuat
	for(int i=0;i<n;i++){
		printf("(%.2f, %.2f)\t", d[i].x, d[i].y);
	}
	// sap xep day diem xa dan goc toa do
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			float kci = sqrt(pow(d[i].x, 2) + pow(d[i].y, 2));
			float kcj = sqrt(pow(d[j].x, 2) + pow(d[j].y, 2));
			if(kci > kcj){
				Diem t = d[i];
				d[i] = d[j];
				d[j] = t;
			}
	}
	// xuat
	for(int i=0;i<n;i++){
		printf("(%.2f, %.2f)\t", d[i].x, d[i].y);
	}
	// tinh tong khoang cach tu cac diem den O
	float s = 0;
	for(int i=0;i<n;i++){
		float kc = sqrt(pow(d[i].x, 2) + pow(d[i].y, 2));
		s=s+kc;
	}
	printf("\ntong kc la: %.2f", s);
	// tim 1 diem gan goc toa do nhat
	float m = sqrt(pow(d[0].x, 2) + pow(d[0].y, 2));
	int vt = 0;
	for(int i=0;i<n;i++){
		float kc = sqrt(pow(d[i].x, 2) + pow(d[i].y, 2));
		if(kc < m){
			m = kc;
			vt = i;
		}
	}
	printf("\nDiem gan nhat la: (%.2f, %.2f)", d[vt].x, d[vt].y);
	// tim dien tich (O, R) nho nhat chua tat ca cac diem
	float max = sqrt(pow(d[0].x, 2) + pow(d[0].y, 2));
	for(int i=0;i<n;i++){
		float kc = sqrt(pow(d[i].x, 2) + pow(d[i].y, 2));
		if(kc > max){
			max = kc;
		}
	}
	printf("\dien tich la %.2f", 3.14*max*max);
}







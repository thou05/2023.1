#include<stdio.h>
void nhap(int n, int a[100]){
	for(int i=0;i<n;i++){
		printf("Nhap ptu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int n, int a[100]){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
// ham tinh tong day so
int tong(int n, int a[100]){
	int s = 0;
	for(int i=0;i<n;i++){
		s=s+a[i];
	}
	return s;
}
// tinh tong cac phan tu lon hon x co trong day
int tongX(int n, int a[100], int x){
	int s = 0;
	for(int i=0;i<n;i++){
		if(a[i]>x){
			s=s+a[i];
		}
	}
	return s;
}
// tim max day so va vi tri chua max
// cach 1
void max(int n, int a[100], int &m, int &vt){
	m = a[0];
	vt = 0;
	for(int i=0;i<n;i++){
		if(a[i]>m){
			m = a[i];
			vt = i;
		}
	}
}
// cach 2
int *max(int n, int a[100]){
	int kq[3];
	int m = a[0];
	int vt = 0;
	for(int i=0;i<n;i++){
		if(a[i]>m){
			m = a[i];
			vt = i;
		}
	}
	kq[0] = m;
	kq[1] = vt;
	return kq;
}

// Tim các giá tri le có trong day
int *mangLe(int n, int a[100], int &k){
	int ml[100];
	k = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			ml[k]=a[i];
			//printf("\nML la: %d", ml[k]);
			k++;
		}
	}
	return ml;
}
// tìm max cac phan tu le cua mang a
main(){
	int n;
	int a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	nhap(n, a);
	xuat(n, a);
	int s = tong(n, a);
	printf("\ntong la: %d", s);
	int x;
	printf("\nNhap x: ");
	scanf("%d", &x);
	s = tongX(n, a, x);
	printf("\ntong cac phan tu lon hon x la: %d", s);
	int m, vt;
	max(n, a, m, vt);
	printf("\nMax la: %d, vi tri %d", m, vt);
	// cach 2
	int *kq = max(n, a);
	printf("\nMax la: %d, vi tri %d", kq[0], kq[1]);
	// cau mang le
	int k;
	int *ml = mangLe(n, a, k);
	//xuat(k, ml);
	printf("\n cac phan tu le la: ");
	for(int i=0;i<k;i++){
		printf("%d ", ml[i]);
	}
}

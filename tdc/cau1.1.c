#include <stdio.h>

void nhap(int n, float a[100]){
    for(int i = 1; i <= n; i++){
        printf("nhap so a thu %d : ",i);
        scanf("%f", &a[i]);
    }
}
void xuat(int n, float a[100]){
    for(int i = 1; i <= n; i++){
        printf("%.2f\t", a[i]); 
    }
}

float tbc(int n, float a[100]){
    float tbc;
    float s = 0;
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] < 10){
            s += a[i];
            dem++;
        }
    }
    if(dem != 0){
        tbc = s / dem;
    }
    else{
        tbc = 0;
    }
    return tbc;
}

float minHieu(int n, float a[100]){
	float hieu[n];
	for(int i = 1; i < n; i++){
		hieu[i] = a[i] - a[i+1];
	}
	float minHieu = hieu[1];
	for(int i = 1; i <= n; i++){
		if(hieu[i] < minHieu) minHieu = hieu[i];	
	}
	return minHieu;
}


int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    float a[100];
    nhap(n, a);
    xuat(n, a);
    float tBC = tbc(n, a);
    printf("\ntbc cac so nho hon 10 la: %.2f", tBC);
    float minHIEU = minHieu(n, a);
    printf("\ngia tri nho  nhat cua hieu cac cap 2 so lien tiep trong day la: %.2f", minHIEU);
}
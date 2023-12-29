#include <stdio.h>

struct DonHang{
    char loai[20];
    int soLuong;
    int maDon;
};

void nhap(struct DonHang *don){
    printf("\nnhap loai do an (com, pho, bun): ");
    getchar();
    gets(don->loai);
    printf("nhap so luong: ");
    scanf("%d", &don->soLuong);
    printf("nhap ma don: ");
    scanf("%d", &don->maDon);
}

void xuat(struct DonHang don){
    printf("\n%s, %d, %d", don.loai, don.soLuong, don.maDon);
}

float thanhTien(struct DonHang don){
    float tien;
    if(strcmp(don.loai, "com") == 0){
        tien = don.soLuong * 50000;
    } 
    if(strcmp(don.loai, "pho") == 0){
        tien = don.soLuong * 40000;
    } 
    if(strcmp(don.loai, "bun") == 0){
        tien = don.soLuong * 35000;
    } 
    return tien;
}

void tienGiamDan(struct DonHang don[], int n){
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(thanhTien(don[i]) < thanhTien(don[j])){
                struct DonHang tmp = don[i];
                don[i] = don[j];
                don[j] = don[i];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        xuat(don[i]);
    }
}

float tongDoanhThu(struct DonHang don[], int n){
    float tong = 0;
    for(int i = 1; i <= n; i++){
        tong += thanhTien(don[i]);
    }
    return tong;
}

int main(){
    int n;
    printf("nhap so luong don hang: ");
    scanf("%d", &n);
    struct DonHang don[n+1];
    for(int i = 1; i <= n; i++){
        printf("\nnhap thong tin don hang thu %d: ", i);
        nhap(&don[i]);
    }
    printf("danh sach don theo thu tu giam dan cua thanh tien: ");
    tienGiamDan(don, n);
    printf("\ntong doanh thu cua cua hang la: %.1f", tongDoanhThu(don, n));

}
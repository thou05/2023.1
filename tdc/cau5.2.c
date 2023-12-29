#include <stdio.h>
#include <string.h>

struct PhieuDiem{
    char hoTen[100];
    char que[1];
    int sbd;
    float diem;
};

void nhap(struct PhieuDiem *phieu){
    printf("\nnhap ho ten: ");
    getchar();
    fgets(phieu->hoTen, sizeof(phieu->hoTen), stdin);
    printf("\nnhap que quan: ");
    getchar();
    fgets(phieu->que, sizeof(phieu->que), stdin);
    printf("\nnhap so bao danh: ");
    scanf("%d", phieu->sbd);
    printf("\nnhap diem thi: ");
    scanf("%f", phieu->diem); 
}

void xuat(struct PhieuDiem *phieu){
    printf("\n%s\t%c\t%d\t%.2f", phieu->hoTen, phieu->que, phieu->sbd, phieu->diem);
}
main(){
    int n;
    printf("Nhap so luong: ");
    scanf("%d", &n);
    struct PhieuDiem phieu[n];
    for(int i = 1; i <= n; i++){
        nhap(&phieu[i]);
    }
    for(int i = 1; i <= n; i++){
        xuat(&phieu[i]);
    }
}
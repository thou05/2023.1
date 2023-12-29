#include <stdio.h>

struct SinhVien{
    int ma;
    char hoTen[100];
    float diemToan;
    float diemAnh;
    float diemTin;
    float diemTriet;
};

void nhap(struct SinhVien *sv){
    printf("\nnhap ma sv: ");
    scanf("%d", &sv->ma);
    printf("nhap ho ten sv: ");
    getchar();
    gets(sv->hoTen);
    printf("nhap diem toan: ");
    scanf("%f", &sv->diemToan);
    printf("nhap diem anh: ");
    scanf("%f", &sv->diemAnh);
    printf("nhap diem tin: ");
    scanf("%f", &sv->diemTin);
    printf("nhap diem triet: ");
    scanf("%f", &sv->diemTriet);
}

void xuat(struct SinhVien sv){
    printf("\n%d, %s, %.1f, %.1f, %.1f, %.1f", sv.ma, sv.hoTen, sv.diemToan, sv.diemAnh, sv.diemTin, sv.diemTriet);
}

void timThiLai(struct SinhVien sv[], int n){
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(sv[i].diemToan < 5 || sv[i].diemAnh < 5 || sv[i].diemTin < 5 || sv[i].diemTriet < 5){
            xuat(sv[i]);
            check = 1;
        }
    }
    if(check == 0){
        printf("khong co sv nao thi lai");
    }
}

void timTheoTen(struct SinhVien sv[], int n, char *timTen){
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(strcmp(sv[i].hoTen, timTen) == 0){
            xuat(sv[i]);
            check = 1;
        }
    }
    if(check == 0){
        printf("khong co sv can tim");
    }
}

int main(){
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien sv[n+1];
    for(int i = 1; i <= n; i++){
        printf("\nnhap thong tin sinh vien %d: ", i);
        nhap(&sv[i]);
    }
    printf("\ndanh sach nhung sinh vien bi thi lai la: ");
    timThiLai(sv, n);

    char timTen[100];
    printf("\nnhap ten sv can tim: ");
    getchar();
    gets(timTen);
    timTheoTen(sv, n, timTen);
}
#include <stdio.h>

struct SinhVien{
    int ma;
    char ten[100];
    int namSinh;
    float diem;
};

void nhap(struct SinhVien *sv){
    printf("\nnhap ma sv: ");
    scanf("%d", &sv->ma);
    printf("nhap ten sv: ");
    getchar();
    gets(sv->ten);
    printf("nhap nam sinh: ");
    scanf("%d", &sv->namSinh);
    printf("nhap diem: ");
    scanf("%f", &sv->diem);
}

void xuat(struct SinhVien sv){
    printf("\n%d, %s, %d, %.1f", sv.ma, sv.ten, sv.namSinh, sv.diem);
}
void maxTuoi(struct SinhVien sv[], int n){
    int max = 1;
    for(int i = 2; i <= n; i++){
        if(sv[i].namSinh < sv[max].namSinh){
            max = i;
        }
    }
    xuat(sv[max]);
}

void timTheoMa(struct SinhVien sv[], int n, int timMa){
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(sv[i].ma == timMa){
            xuat(sv[i]);
            check = 1;
        }
    }
    if(check == 0){
        printf("khong tim thay sv co ma can tim");
    }

}

void timTheoDiemChuan(struct SinhVien sv[], int n, float diemChuan){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(sv[i].diem > diemChuan){
            xuat(sv[i]);
            dem++;
        }
    }
    if(dem == 0){
        printf("khong co sinh vien nao trung tuyen");
    }
}
int main(){
    int n;
    printf("\nnhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien sv[n+1];
    for(int i = 1; i <= n; i++){
        printf("\nnhap sinh vien thu %d: ",i);
        nhap(&sv[i]);
    }
    printf("\nsinh vien lon tuoi nhat trong lop la: ");
    maxTuoi(sv, n);

    int timMa;
    printf("\nnhap ma can tim: ");
    scanf("%d", &timMa);
    timTheoMa(sv, n, timMa);

    float diemChuan;
    printf("\nnhap diem chuan: ");
    scanf("%f", &diemChuan);
    printf("nhung sv trung tuyen la: ");
    timTheoDiemChuan(sv, n, diemChuan);

}
#include <stdio.h>
#include <string.h>

struct SinhVien{
    int ma;
    char hoTen[100];
    char truong[2];
    double diem;
};

void nhap(struct SinhVien *sv){
    printf("\nnhap ma sv: ");
    scanf("%d", &sv->ma);
    printf("nhap ho ten: ");
    getchar();
    gets(sv->hoTen);
    printf("nhap truong: ");
    getchar();
    gets(sv->truong);
    printf("nhap diem: ");
    scanf("%lf", &sv->diem);
}

void xuat(struct SinhVien sv){
    printf("\n%d, %s, %s, %.1lf", sv.ma, sv.hoTen, sv.truong, sv.diem);
}

void timVaIn(struct SinhVien sv[], int n){
    printf("\ndanh sach sv co diem thi >=15 thuoc truong B: ");
    for(int i = 1; i <= n; i++){
        if(sv[i].diem >= 15 && strcmp(sv[i].truong, "B") == 0){
            xuat(sv[i]);
        }
    }
}

void sapXep(struct SinhVien sv[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <=n ; j++){
            if(sv[i].diem > sv[j].diem){
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

void timTheoTen(struct SinhVien sv[], int n, char *ten){
    for(int i = 1; i <= n; i++){
        if(strcmp(sv[i].hoTen, ten) == 0){
            xuat(sv[i]);
        }else{
            printf("khong tim thay sinh vien ten: %s", ten);
        }
    }
}

int main(){
    int n;
    printf("nhap so sinh vien: ");
    scanf("%d", &n);
    struct SinhVien sv[n+1];
    for(int i = 1; i <= n; i++){
        printf("\nnhap thong tin sv thu %d: ", i);
        nhap(&sv[i]);
    }
    timVaIn(sv, n);
    printf("\ndanh sach sv theo thu tu diem giam dan: ");
    for(int i = 1; i <= n; i++){
        xuat(sv[i]);
    }

    char ten[100];
    printf("\nnhap ten sv can tim: ");
    getchar();
    gets(ten);
    timTheoTen(sv, n, ten);
}
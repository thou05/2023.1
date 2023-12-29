#include <stdio.h>
#include <string.h>

struct Sach{
    int ma;
    char ten[100];
    char tacGia[100];
    int tien;
};

void nhap(struct Sach *sach){
    printf("\nnhap ma sach: ");
    scanf("%d", &sach->ma);
    printf("nhap ten sach: ");
    getchar();
    gets(sach->ten);
    printf("nhap ten tac gia: ");
    fflush(stdin);
    gets(sach->tacGia);
    printf("nhap gia tien: ");
    scanf("%d", &sach->tien);
}

void xuat(struct Sach sach){
    printf("\n%d, %s, %s, %d", sach.ma, sach.ten, sach.tacGia, sach.tien);
}
void timTheoTen(struct Sach sach[], int n, char *timTen){
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(strcmp(sach[i].ten, timTen) == 0){
            xuat(sach[i]);
            check = 1;
        }
    }
    if(check == 0){
        printf("k\nhong tim thay sach");
    }
}

void maxGia(struct Sach sach[], int n){
    int vitrimax = 1;
    for(int i = 2; i <= n; i++){
        if(sach[i].tien > sach[vitrimax].tien){
            vitrimax = i;
        }
    }
    printf("\ncuon sach dat nhat la: ");
    xuat(sach[vitrimax]);
}

int demSachHon100(struct Sach sach[], int n){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(sach[i].tien > 100){
            dem++;
        }
    }
    return dem;
}

int main(){
    int n;
    printf("nhap so luong sach: ");
    scanf("%d", &n);
    struct Sach sach[n+1];
    for(int i = 1; i <= n; i++){
        printf("\nnhap thong tin sach thu %d: ", i);
        nhap(&sach[i]);
    }

    char timTen[100];
    printf("\nnhap ten can tim: ");
    getchar();
    gets(timTen);
    timTheoTen(sach, n, timTen);

    maxGia(sach, n);

    int demSach = demSachHon100(sach, n);
    printf("\nso cuon sach co gia hon 100 la: %d", demSach);

}
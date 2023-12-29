#include <stdio.h>
#include <string.h>

struct ThiSinh{
    int maSV;
    char tenSV[100];
    double diemTB;
    char truong;
};

int main(){
    int n;
    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);
    struct ThiSinh thisinh[n];
    for(int i = 1; i <= n; i++){
        printf("Nhap ten sv: ");
        getchar();
        fgets(thisinh[i].tenSV, sizeof(thisinh[i].tenSV), stdin);
        printf("Nhap mã sv: ");
        scanf("%d", &thisinh[i].maSV);
        printf("Nhap ten truong: ");
        scanf(" %c", &thisinh[i].truong);
        printf("Nhap diem trung binh: ");
        scanf("%lf", &thisinh[i].diemTB);
    }
    //in ra man hinh
    for(int i = 1; i <= n; i++){
        printf("\n%s\t%d\t%.2lf\t%c", thisinh[i].tenSV, thisinh[i].maSV, thisinh[i].diemTB, thisinh[i].truong); 
    }
    // thi sinh co diem cao nhat
    double maxDiem = thisinh[1].diemTB;
    for(int i = 1; i <= n; i++){
        if(thisinh[i].diemTB > maxDiem){
            maxDiem = thisinh[i].diemTB;
        }
    }
    for(int i = 1; i <= n; i++){
        if(thisinh[i].diemTB == maxDiem){
            printf("Thi sinh co diem cao nhat la: %s", thisinh[i].tenSV);
        }
    }

    //tim cac sv co dtb lon hon 5 cua truong b
    printf("sv co diem tb lon hon 5 cua truong B la: ");
    for(int i = 1; i <= n; i++){
        if(thisinh[i].diemTB > 5 && thisinh[i].truong == 'B'){
            printf("\n%s\t%d\t%.2lf\t%c", thisinh[i].tenSV, thisinh[i].maSV, thisinh[i].diemTB, thisinh[i].truong); 
        }
    }
    // sap xep danh sach thi sinh tang dan theo dtb
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(thisinh[i].diemTB > thisinh[j].diemTB){
                struct ThiSinh t = thisinh[i];
                thisinh[i] = thisinh[j];
                thisinh[j] = t;
            }
        }
    }
    // in ra man hinh
    printf("\ndanh sach sau khi hoan vi: \n");
    for(int i = 1; i <= n; i++){
        printf("\n%s\t%d%.2lf\t%c", thisinh[i].tenSV, thisinh[i].maSV, thisinh[i].diemTB, thisinh[i].truong); 
    }
    
    //thong ke so thi sinh moi truong
    int tsA = 0, tsB = 0, tsC = 0;
    for(int i = 1; i <= n; i++){
        if(thisinh[i].truong == 'A'){
            tsA++;
        }
        if(thisinh[i].truong == 'B'){
            tsB++;
        }
        if(thisinh[i].truong == 'C'){
            tsC++;
        }
    }
    printf("\nSo thi sinh truong A, B, C lam luot la: %d %d %d", tsA, tsB, tsC);

    //truong nao nhieu thi sinh nhat
    if(tsA > tsB && tsA > tsC){
        printf("\nTruong A co nhieu thi sinh nhat");
    }
    else if(tsB > tsA && tsB > tsC){
        printf("\nTruong B co nhieu thi sinh nhat");
    }
    else if(tsC > tsA && tsC > tsB){
        printf("\nTruong C co nhieu thi sinh nhat");
    }

    //sv co diem cao nhat truong B
    int maxB;
    for(int i = 1; i <= n; i++){
        if(thisinh[i].truong == 'B'){
            maxB = thisinh[i].diemTB;
            break;
        }
    }
    if(tsB == 0) printf("\nKhong co sinh vien truong B");
    else{
        for(int i = 1; i <= n; i++){
            if(thisinh[i].diemTB > maxB && thisinh[i].truong == 'B') maxB = thisinh[i].diemTB;
        }
        printf("thi sinh co diem cao nhat truong B la: ");
        for(int i = 1; i<= n; i++){
            if(thisinh[i].diemTB == maxB) printf("\n%s\t%d\t%.2lf\t%c", thisinh[i].tenSV, thisinh[i].maSV, thisinh[i].diemTB, thisinh[i].truong); 
        }
    }
}
#include <stdio.h>
#include <string.h>

struct Hang{
    int ma;
    char ten[100];
    char xuatxu[100];
    int loai;
    int soLuong;
    int tgbh;
};

main(){
    int n;
    printf("\nnhap so luong mat hang: ");
    scanf("%d", &n);
    struct Hang hang[n];
    for(int i = 1; i <= n; i++){
        printf("\nnhap ma hang thu %d ", i);
        scanf("%d", &hang[i].ma);
        printf("\nnhap ten hang thu %d ", i);
        getchar();
        fgets(hang[i].ten, sizeof(hang[i].ten), stdin);
        printf("\nnhap xuat xu hang thu %d ", i);
        getchar();
        fgets(hang[i].xuatxu, sizeof(hang[i].xuatxu), stdin);
        printf("\nnhap loai hang thu %d ", i);
        scanf("%d", &hang[i].loai);
        printf("\nnhap so luong hang thu %d ", i);
        scanf("%d", &hang[i].soLuong);
        printf("\nnhap thoi gian bao hanh hang thu %d ", i);
        scanf("%d", &hang[i].tgbh);
    }
    int dem1 = 0, dem2 = 0, dem3 = 0;
    for(int i = 1; i <= n; i++){
        if(hang[i].tgbh >= 12){
            if(hang[i].loai == 1) dem1++;
            else if (hang[i].loai == 2) dem2++;
            else if (hang[i].loai == 3) dem3++;
        }
    }
    printf("\ntong so hang loai 1, 2, 3 co thoi gian bao hanh tu 12 thang tro len lan luot la: %d %d %d", dem1, dem2, dem3);
    char timHang[100];
    fgets(timHang, sizeof(timHang), stdin);
    for(int i = 1; i <= n; i++){
        if(hang[i].ten == timHang){
            printf("\n%d\t%s\t%s\t%d\t%d\t%d", hang[i].ma, hang[i].ten, hang[i].xuatxu, hang[i].loai, hang[i].soLuong, hang[i].tgbh);
        }
    }
    //so luog lon nhat mat hang loai 2
    int max2;
    for(int i = 1; i <= n; i++){
        if(hang[i].loai == 2){
            max2 = hang[i].soLuong;
            break;
        }
    }
    for(int i = 1; i <= n; i++){
        if(hang[i].soLuong > max2 && hang[i].loai == 2) max2 = hang[i].soLuong;
    }
    printf("\nso luong lon nhat cua mat hang loai 2 la: %d", max2);

    //sap xep giam dan theo tgbh
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j < n; j++){
            if(hang[i].tgbh < hang[j].tgbh){
                struct Hang t = hang[i];
                hang[i] = hang[j];
                hang[j] = t;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        printf("\n%d\t%s\t%s\t%d\t%d\t%d", hang[i].ma, hang[i].ten, hang[i].xuatxu, hang[i].loai, hang[i].soLuong, hang[i].tgbh);
    }
}

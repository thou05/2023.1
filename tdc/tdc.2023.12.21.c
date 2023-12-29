#include <stdio.h>
#define FOR(i, a, b) for(int i = a; i <= b; i++);

struct Olympic{
    char hoTen[100];
    float diem;
    char truong[2];
};

float tong(int n, struct Olympic olp[], char truong){
    float s = 0;
    for(int i = 1; i <= n; i++){
        if(strcmp(olp[i].truong, truong) == 0){
            s += olp[i].diem;
        }
    }
    return s;
}

int dem(int n, struct Olympic olp[], char truong){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(strcmp(olp[i].truong, truong) == 0){
            dem++;
        }
    }
    return dem;
}

int main(){
    int n;
    printf("nhap so luong thi sinh olp: ");
    scanf("%d", &n);
    struct Olympic olp[n];
    for(int i = 1; i <= n; i++){
        printf("nhap ho ten: ");
        getchar();
        gets(olp[i].hoTen);
        printf("nhap diem: ");
        scanf("%f", &olp[i].diem);
        printf("nhap truong: ");
        getchar();
        gets(olp[i].truong);
    }
    float diemA = 0, diemB = 0, diemC = 0;
    diemA = tong(n, olp, 'A');
    diemB = tong(n, olp, 'B');
    diemC = tong(n, olp, 'C');
    if(diemA > diemB && diemA > diemC){
        printf("\ntruong A co tong diem cao nhat");
    }
    if(diemB > diemA && diemB > diemC){
        printf("\ntruong B co tong diem cao nhat");
    }
    if(diemC > diemB && diemC > diemA){
        printf("\ntruong C co tong diem cao nhat");
    }

    int demA = 0, demB = 0, demC = 0;
    demA = dem(n, olp, 'A');
    demB = dem(n, olp, 'B');
    demC = dem(n, olp, 'C');
    printf("\nso luong sinh vien tham du cua truong A, B, C lan luot la: %d %d %d", demA, demB, demC);

    float maxdiemA;
    if(demA == 0){
        printf("\nkhong co thi sinh truong A");
    }else{
        for(int i = 1; i <= n; i++){
            if(strcmp(olp[i].truong, "A") == 0){
                maxdiemA = olp[i].diem;
                break;
            }
        }
        for(int i = 1; i <= n; i++){
            if(olp[i].diem > maxdiemA && strcmp(olp[i].truong, "A") == 0){
                maxdiemA = olp[i].diem;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(olp[i].diem == maxdiemA && strcmp(olp[i].truong, "A") == 0){
            printf("\nthi sinh diem cao nhat truong A la: %s ", olp[i].hoTen);
        }
    }
    char truongtim;
    printf("\nnhap ten truong muon tim: ");
    getchar();
    gets(truongtim);
    for(int i = 1; i <= n; i++){
        if(strcmp(olp[i].truong, truongtim) == 0){
            printf("\n%s ", olp[i].hoTen);
        }
    }
    char timten[100];
    printf("\nnhap ten thi sinh can tim: ");
    getchar();
    gets(timten);
    for(int i = 1; i <= n; i++){
        if(strcmp(olp[i].hoTen, timten) == 0){
            printf("\n%s\t%.1f\t%s", olp[i].hoTen, olp[i].diem, olp[i].truong);
        }else{
            printf("\nkhong co thi sinh can tim");
        }
    }
    float x;
    printf("\nnhap x: ");
    scanf("%f", &x);
    int check = 0;
    for(int i = 1; i <= n; i++){
        if(demB == 0){
            check = 2;
        }
        else if(strcmp(olp[i].truong, "B") == 0 && olp[i].diem < x){
            check = 1;
            break;
        }
    }
    if(check == 0){
        printf("\ntoan bo thi sinh truong B co diem deu lon hon x");
    }else if(check == 1){
        printf("\nkhong phai toan bo ts truong B co diem lon hon x");
    }else if(check == 2){
        printf("\nkhong co thi sinh truong B");
    }

}
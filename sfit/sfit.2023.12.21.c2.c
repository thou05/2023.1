#include <stdio.h>

struct ThiSinh{
    char hoTen[100];
    char que[100];
    char truong[2];
    int sbd;
    float diem;
};

int main(){
    int n;
    printf("nhap so luong thi sinh: ");
    scanf("%d", &n);
    struct ThiSinh ts[n+1];
    for(int i = 1; i <= n; i++){
        printf("nhap ho ten: ");
        getchar();
        gets(ts[i].hoTen);
        printf("nhap que quan: ");
        fflush(stdin);
        gets(ts[i].que);
        printf("nhap truong: ");
        fflush(stdin);
        gets(ts[i].truong);
        printf("nhap so bao danh: ");
        scanf("%d", &ts[i].sbd);
        printf("nhap diem: ");
        scanf("%f", &ts[i].diem);
    }

    //tim ts co diem thi >= 15
    printf("\nthi sinh co diem thi >= 15 la: ");
    for(int i = 1; i <= n; i++){
        if(ts[i].diem >= 15){
            printf("\n%s", ts[i].hoTen);
        }
    }

    //sap xep giam dan theo diem
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(ts[i].diem < ts[j].diem){
                struct ThiSinh tmp = ts[i];
                ts[i] = ts[j];
                ts[j] = tmp;
            }
        }
    }
    printf("\nthi sinh theo diem giam dan la:");
    for(int i = 1; i <= n; i++){
        printf("\n%s", ts[i].hoTen);
    }
    //thong ke so sinh vien 3 truong
    int demA = 0, demB = 0, demC = 0;
    for(int i = 1; i <= n; i++){
        if(strcmp(ts[i].truong, "A") == 0){
            demA++;
        }
        if(strcmp(ts[i].truong, "B") == 0){
            demB++;
        }
        if(strcmp(ts[i].truong, "C") == 0){
            demC++;
        }
    }
    printf("\nthi sinh du thi cua 3 truong A, B, C lan luot la: %d %d %d", demA, demB, demC);
}
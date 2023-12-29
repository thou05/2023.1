#include <stdio.h>
#include <math.h>
#define FOR(i, a, b) for(int i = a; i <= b; i++)

struct Diem{
    float x, y;
};

int main(){
    int n;
    printf("nhap so luong diem: ");
    scanf("%d", &n);
    struct Diem diem[n];
    FOR(i, 1, n){
        printf("nhap hoanh do va tung do thu %d: ", i);
        scanf("%f%f", &diem[i].x, &diem[i].y);
    }
    //tinh do dai duong gap khuc di qua cac diem
    float doDai;
    FOR(i, 1, n){
        FOR(j, i + 1, n){
            doDai += sqrt((diem[j].x - diem[i].x) * (diem[j].x - diem[i].x) + (diem[j].y - diem[i].y) * (diem[j].y - diem[i].y));
        }
    }
    printf("\ndo dai duong gap khuc di qua tat ca cac diem la: %.1f", doDai);
    float r;
    printf("\nnhap ban kinh r: ");
    scanf("%f", &r);
    printf("\ncac diem nam trong duong tron tam O ban kinh R la: ");
    FOR(i, 1,n){
        if(diem[i].x < r && diem[i].y < r){
            printf("\n(%.1f %.1f)", diem[i].x, diem[i].y);
        }
    }
    float maxkc = 0, kc;
    FOR(i, 1, n){
        kc = sqrt(diem[i].x * diem[i].x + diem[i].y * diem[i].y);
        if(kc > maxkc){
            maxkc = kc;
        }
    }
    printf("\ndien tich hinh tron tam O nho nhat chua tat ca cac diem la: %.1f", 3.14 * maxkc * maxkc);
}
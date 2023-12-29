#include <stdio.h>
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct Sach{
    int id;
    char nameBook[100];
    char author[100];
    int price;
};

int main(){
    int n;
    printf("nhap so luong sach: ");
    scanf("%d", &n);
    struct Sach sach[n];
    FOR(i, 0, n){
        printf("nhap ma sach: ");
        scanf("%d", &sach[i].id);
        printf("nhap ten sach: ");
        getchar();
        gets(sach[i].nameBook);
        printf("nhap ten tac gia: ");
        fflush(stdin);
        gets(sach[i].author);
        printf("nhap gia tien: ");
        scanf("%d", &sach[i].price);
    }
    FOR(i, 0, n){
        printf("\n%d\t%s\t%s\t%d", sach[i].id, sach[i].nameBook, sach[i].author, sach[i].price);
    }
    char findAuthor[100];
    printf("\nnhap ten tac gia can tim: ");
    fflush(stdin);
    gets(findAuthor[100]);
    FOR(i, 0, n){
        if(strcmp(sach[i].author, findAuthor) == 0){
            printf("\n%s", sach[i].nameBook);
        }
    }
    int maxPrice, loca;
    FOR(i, 0, n){
        if(sach[i].price > maxPrice){
            maxPrice = sach[i].price;
            loca = i;
        }
    }
    printf("cuon sach co gia dat nhat la: %s", sach[loca].nameBook);
    int dem = 0;
    FOR(i, 0, n){
        if(sach[i].price > 100){
            dem++;
        }
    }
    printf("nhung cuon sach co gia lon hon 100 la: %d", dem);
}


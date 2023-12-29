#include <stdio.h>
#include <string.h>

struct Student{
    char name[100];
    int age;
    float point;
    char homeTown[100];
};


int main(){
    struct Student student[5];
    for(int i = 1; i <= 1; i++){
        printf("\nnhap ten sinh vien %d : ", i);
        gets(student[i].name);
        printf("\nnhap tuoi sinh vien %d: ", i);
        scanf("%d", &student[i].age);
        printf("\nnhap diem cua sinh vien %d: ", i);
        scanf("%f", &student[i].point);
        getchar();
        printf("\nnhap que quan sinh vien %d: ", i);
        // getchar();
        gets(student[i].homeTown);
    }
    for(int i = 1; i <= 1; i++){
        printf("\n%s\t%d\t%.1f\t%s", student[i].name, student[i].age, student[i].point, student[i].homeTown);
    }
}
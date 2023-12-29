#include <stdio.h>

// tinh tong 2 so a va b
int tong(int a, int b){
    int s = a + b;
    return s;
}
void tong1(int a, int b){
    
}
int main(){
    printf("nhap 2 so a va b: ");
    scanf("%d%d", &a, &b);
    int s = tong(a, b);
    printf("Tong la: %d", s);
}
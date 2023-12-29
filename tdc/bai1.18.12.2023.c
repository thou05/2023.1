#include <stdio.h>
#include <math.h>

void nhapx(int n, float x[100]){
    for(int i = 1; i <= n; i++){
        printf("nhap x%d: ", i);
        scanf("%f", &x[i]);
    }
}

float tinhS(int n, float x[100]){
    float tongS = x[1];
    for(int i = 2; i <= n; i++){
        tongS += pow(x[i], i) / pow(n, 3);
    }
    return tongS;
}

float tinhS1(int n, float x[100]){
    float tongS1;
    for(int i = 1; i <= n; i++){
        tongS1 += (pow(cos(x[i]), i) + pow(-1, i)) / n;
    }
    return tongS1;
}

float tinhS2(int n, float x[100]){
    float tongS2 = sqrt(x[1] + 1);
    for(int i = 1; i <= n ; i++){
        tongS2 += pow(-1, i+1) * (i * pow(x[i], i)) / (i + 2);
    } 
    return tongS2;
}

int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    float x[100];
    nhapx(n, x);
    float s = tinhS(n, x);
    printf("\ngia tri cua s la: %.1f", s);
    float s1 = tinhS1(n, x);
    printf("\ngia tri cua s1 la: %.1f", s1);
    float s2 = tinhS2(n, x);
    printf("\ngia tri cua s2 la: %.1f", s2);

}
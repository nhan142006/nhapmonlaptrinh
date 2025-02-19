#include <stdio.h>

int main () {
    float dai, rong, chuvi, dientich;

    printf("Nhap chieu dai: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong: ");
    scanf("%f", &rong);

    chuvi = (dai + rong) * 2;
    dientich = dai * rong;

    printf("Chu vi: %.2f\n", chuvi);    
    printf("Dien tich: %.2f\n", dientich);
    
}
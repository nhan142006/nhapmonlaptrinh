#include <stdio.h>


int main () {
    char name[50];
    float toan, ly, hoa, dtb;

    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);

    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    dtb = (toan + ly + hoa) / 3;

    printf("Ten: %s", name);
    printf("Diem trung binh: %.2f", dtb);

    return 0;
}
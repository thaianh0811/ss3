#include <stdio.h>
int main(){
    float toan, van, anh;
    printf("Nhap diem mon toan : ");
    scanf("%f", &toan);
    printf("Nhap diem mon van : ");
    scanf("%f", &van);
    printf("Nhap diem mon anh : ");
    scanf("%f", &anh);

    float tong_diem = toan + van + anh;
    float diem_trung_binh = tong_diem / 3;

    printf("Tong diem: %.2d\n", tong_diem);
    printf("Diem trung binh: %.2f\n", diem_trung_binh);

    return 0;
}
#include<stdio.h>
int main() {
    int num, digit, sum = 0, rev = 0;
    printf("Nhap: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        sum += digit;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Tong: %d\n", sum);
    printf("So nghich dao : %d\n", rev);

    return 0;
}

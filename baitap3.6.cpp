#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, age;
    printf("Nhap nam sinh: ");
    scanf("%d", &birth_year);
    age = 2023 - birth_year;
    printf("Tuoi: %d\n", age);

    if (age % 2 == 0) {
        printf("Tuoi cua ban la so chan .\n");
    } else {
        printf("Tuoi cua ban la so le.\n");
    }

    return 0;
}
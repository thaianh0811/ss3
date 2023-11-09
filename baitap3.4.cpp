#include<stdio.h>
int main(){
	float number1, number2, number3;
	printf("nhap so 1 : ");
	scanf("%f",&number1);
	printf("nhap so 2 : ");
	scanf("%f",&number2);
	printf("nhap so 3 : ");
	scanf("%f",&number3);
    int max = (number1  > number2 ) ? ((number1  > number3 ) ? number1  : number3 ) : ((number2  > number3 ) ? number2  : number3);
    int min = (number1  < number2 ) ? ((number1  < number3 ) ? number1  : number3 ) : ((number2  < number3 ) ? number2  : number3);

    printf("So lon nhat: %d\n", max);
    printf("S? nho nhat: %d\n", min);

    return 0;
}
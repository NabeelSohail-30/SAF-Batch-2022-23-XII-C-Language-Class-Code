#include <stdio.h>
#include <conio.h>
int main(){
	int num1;
	int num2;
	
	printf("Enter 1st Number: ");
	scanf("%d", &num1);
	
	printf("\nEnter 2nd Number: ");
	scanf("%d", &num2);
	
	printf("\n\nValue of Num1: %d", num1);
	printf("\nValue of Num2: %d", num2);
	printf("\n\nSum: %d", num1+num2);
	printf("\n\nDiff: %d", num1-num2);
	printf("\n\nProduct: %d", num1*num2);
	printf("\n\nDivide: %d", num1/num2);
	printf("\n\nMod: %d", num1%num2);
	
	return 0;
}

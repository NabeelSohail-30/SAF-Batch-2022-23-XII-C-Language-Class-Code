#include <stdio.h>
#include <conio.h>

int main(){
	float a, b, aSq, bSq, ab2, result;
	
	printf("Program to Calculate (a+b)^2\n\n\n");
	
	printf("Enter value of a: ");
	scanf("%f", &a);
	
	printf("\nEnter value of b: ");
	scanf("%f", &b);
	
	aSq = a*a;
	bSq = b*b;
	ab2 = 2*a*b;
	result = aSq+ab2+bSq;
	
	printf("\n\nResult: %.2f", result);
	
	return 0;
}

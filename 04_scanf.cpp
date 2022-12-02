#include <stdio.h>
#include <conio.h>

int main(){
	int num1;
	printf("Enter a Number: ");
	scanf("%d", &num1);
	printf("\nValue of Num1: %d", num1);
	
	char ch;
	printf("\n\nEnter a Character: ");
	getchar();	//use before inputting char data type as many time as required
	scanf("%c", &ch);
	printf("\nValue of ch: %c", ch);
	
	float myFloat;
	printf("\n\nEnter a float: ");
	scanf("%f", &myFloat);
	printf("\nValue of float: %f", myFloat);
	
	double myDouble;
	printf("\n\nEnter a double: ");
	scanf("%Lf", &myDouble);
	printf("\nValue of double: %Lf", myDouble);
	
	return 0;
}

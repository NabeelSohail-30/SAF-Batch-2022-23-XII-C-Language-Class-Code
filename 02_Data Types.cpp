//header files
#include <stdio.h>
#include <conio.h>

//main function
int main(){
	int a;		//variable declaration
	
	a = 10; 	//variable initialization
	
	printf("%d", a);	//printing value of a
	
	int b = 50;		//variable declaration & initi:alization
	
	printf("\nvalue of b: %d", b);	//printing value of b with msg
	
	int c=9, h=6;	//multiple variables in single statement
	
	//printing multiple variables in single statement
	printf("\nvalue of c: %d\nvalue of h: %d", c,h);
	
	float myFloat=9;	//float data type variable
	
	//printing float variable value with 6 decimal points
	printf("\nSalary of emp: %f", myFloat);
	//prints value with 2 decimal points
	printf("\nSalary of emp: %.2f", myFloat);
	
	char ch = 'g';	//character data type variable
	printf("\nchar value = %c", ch);	//prints ch value
	
	double dbl = 10.989;	//double data type variable
	printf("\ndbl = %f", dbl);	//prints dbl value
	
	return 0;
}

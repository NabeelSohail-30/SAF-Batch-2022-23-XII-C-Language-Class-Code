#include <stdio.h>
#include <math.h>
int main(){
	double result;
	
	result = pow(2, 4);		//function to calculate power
	printf("power = %.2lf", result);
	
	result = abs(3.188)		//function to absolute of a number
	printf("\nabsolute = %.2lf", result);
	
	result = round(7.6);	//function to round of a number
	printf("\nround = %.2lf", result);
	
	result = floor(7.6);	//function to round of a number to the int less than the number entered
	printf("\nfloor = %.2lf", result);
	
	result = sin(30);		//function to calculate sin
	printf("\nsin = %.2lf", result);
	
	return 0;
}

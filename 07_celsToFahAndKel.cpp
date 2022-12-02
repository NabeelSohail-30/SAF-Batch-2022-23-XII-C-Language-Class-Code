#include <stdio.h>
#include <conio.h>

int main(){
	float c, f, k;
	
	printf("Enter Temp in Celsius: ");
	scanf("%f", &c);
	
	f = ((9/5)*c)+32;
	k = (c+273);
	
	printf("\n\nTemp in Fahreniet: %f", f);
	printf("\nTemp in Kelvin: %f", k);
	
	return 0;
}

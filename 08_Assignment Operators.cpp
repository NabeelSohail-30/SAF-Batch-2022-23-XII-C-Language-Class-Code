#include <stdio.h>
#include <conio.h>

int main(){
	int a=10, b=5;
	
	printf("a+=b: %d", a+=b);
	printf("\nValue of a: %d", a);
	printf("\na-=b: %d", a-=b);
	printf("\nValue of a: %d", a);
	printf("\na*=b: %d", a*=b);
	printf("\nValue of a: %d", a);
	printf("\na/=b: %d", a/=b);
	printf("\nValue of a: %d", a);
	printf("\na%=b: %d", a%=b);
	printf("\nValue of a: %d", a);
	return 0;
}

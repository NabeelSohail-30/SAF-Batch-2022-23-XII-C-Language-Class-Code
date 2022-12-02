#include <stdio.h>

int main(){
	int a=5;
	int x=0;
	
	printf("%d", a);
	printf("\n%d", x);
	
	x=a++;
	printf("\n\n%d", a);
	printf("\n%d", x);
	
	x=++a;
	printf("\n\n%d", a);
	printf("\n%d", x);
	
	
	return 0;
}

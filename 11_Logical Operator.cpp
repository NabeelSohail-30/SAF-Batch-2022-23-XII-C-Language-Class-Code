#include <stdio.h>

int main(){
	int a=10, b=20, c=10;
	printf("a = %d, b = %d, c = %d", a,b,c);
	printf("\na == b AND b == c: %d", (a==b && b==c));
	printf("\na != b OR a > c: %d", (a!=b || a>c));
	printf("\na NOT == c: %d", !(a==c));
	return 0;
}

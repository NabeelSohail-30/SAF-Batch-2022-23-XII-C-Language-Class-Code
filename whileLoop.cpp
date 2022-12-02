#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	
	printf("Enter a Number (1-50): ");
	scanf("%d",&num);
	
	while(num < 1 || num > 50){
		printf("\nEnter a Number (1-50): ");
		scanf("%d",&num);	
	}
	
	printf("your num is %d", num);
	
	return 0;
}

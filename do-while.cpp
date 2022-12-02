#include <stdio.h>
#include <conio.h>

int main(){
	float num, sum=0;
	int count=0;
	
	printf("Enter numeric Values to Calculate their Sum");
	printf("\nPress 0 to View the Sum\n\n");
	
	do{
		count++;
		printf("Enter Num: ");
		scanf("%f", &num);
		sum+=num;
	}while(num!=0);
	
	printf("\n\nTotal Number: %d", --count);
	printf("\nSum: %.2f", sum);
	
	return 0;
}

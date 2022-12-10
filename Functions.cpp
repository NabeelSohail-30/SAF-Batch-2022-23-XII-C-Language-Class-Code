#include <stdio.h>

//syntax of creating a function
//returnType functionName(dataType name,...) 

//function without parameter, return val
void Add(){
	int n1, n2;
	printf("Enter Number 01: ");
	scanf("%d", &n1);
	printf("Enter Number 02: ");
	scanf("%d", &n2);
	printf("\n\nSum = %d",n1+n2);
}

//function with parameter, no return val
void Add2(int n1, int n2){
		printf("\n\nSum = %d",n1+n2);
}

//function without parameter, with return val
int Add3(){
	int n1, n2, sum;
	printf("Enter Number 01: ");
	scanf("%d", &n1);
	printf("Enter Number 02: ");
	scanf("%d", &n2);
	sum = n1+n2;
	//return n1+n2;
	return sum;
}

//function with parameter, return val
int Add4(int a, int b){
	return a+b;
}

int main(){
	int n1=25, n2=30;
	int ret;
	
	printf("\n----------Function 01---------\n");
	Add();	//function 01 called	

	printf("\n----------Function 02---------\n");
	Add2(n1, n2);
	Add2(101, 80);
	
	printf("\n----------Function 03---------\n");
	ret = Add3();
	printf("ret = %d", ret);
	
	printf("\n----------Function 04---------\n");
	ret = Add4(n1, n2);
	printf("ret = %d", ret);
	
	return 0;
}

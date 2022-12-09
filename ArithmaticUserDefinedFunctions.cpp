#include <stdio.h>

//function to Add two Numbers
int Add(int n1, int n2){
	return n1+n2;
}

//function to subtract two numbers
int Sub(int n1, int n2){
	return n2-n1;
}

//function to multiply two numbers
int Mul(int n1, int n2){
	return n1*n2;
}

//function to divide two numbers
int Div(int n1, int n2){
	return n2/n1;
}

//main function
int main(){
	int n1 = 5, n2 = 20, result;
	
	//Add
	result = Add(n1, n2);
	printf("\nSum = %d", result);
	
	//Subtract
	result = Sub(n1, n2);
	printf("\nDiff = %d", result);
	
	//Multiply
	result = Mul(n1, n2);
	printf("\nProduct = %d", result);
	
	//Divide
	result = Div(n1, n2);
	printf("\nDivide = %d", result);
	
	return 0;
}

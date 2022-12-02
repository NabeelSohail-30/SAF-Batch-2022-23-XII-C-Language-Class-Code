#include <stdio.h>
#include <conio.h>

#define pi 3.142	//#define constant or global constant, its value cannot be changed

int globalVar = 90;		//global variable, can be used through out our entire program

int main(){
	//start of program 
	
	int variable = 10;	//local variable
	const int constant = 8;		//constant using const keyword, local constant
	
	printf("variable = %d", variable);	//prints value of variable
	printf("\nconstant = %d", constant);	//prints value of constant

	printf("\npi = %f", pi);	//prints value of pi
	printf("\nglobal = %d", globalVar);		//prints value of globalVar
	
	variable = 20;	//value changed from 10 to 20, concept called overwrite
	//constant = 87; program will give error as constant cannot be changed
	
	printf("\n\nvariable = %d", variable);	//updated value of variable
	printf("\nconstant = %d", constant);	//constant value non changed
	
	return 0;	//end of program
}

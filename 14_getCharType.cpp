#include <stdio.h>
#include <conio.h>

int main(){
	char ch = 'h';
	
	if(ch >= 65 && ch <= 90){
		printf("upper case");
	}
	else if(ch >= 97 && ch <= 122){
		printf("lower case");
	}
	else if(ch >= 48 && ch <= 57){
		printf("number");
	}
	else{
		printf("special char");
	}
	
	return 0;
}

#include <stdio.h>
int main (){
	int pin ;
	int sum = 0 ;
	printf("Enter Pin : ");
	scanf("%d" , &pin);
	for (int i = 0 ; i<4 ; i++){
		sum = (pin%10) + sum;
		pin = pin/10;
	}
	if (sum > 10) printf("Strong pin");
	else printf("Weak pin");
}

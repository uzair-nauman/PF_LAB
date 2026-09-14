#include <stdio.h>
int main(){
	int num1 ;
	int num2 ;
	int num3 ;
	printf("Enter number");
	scanf("%i" , &num1);
	printf("Enter number");
	scanf("%i" , &num2);
	printf("Enter number");
	scanf("%i" , &num3);
	if(num1 > num2 && num1 > num3)
		printf("%i" , num1);
	if(num2 > num1 && num2 > num3)
		printf("%i" , num2);
	if(num3 > num2 && num3 > num2)
		printf("%i" , num3);
	if(num1 == num2 && num1 > num3)
		printf("Number 1 and Number 2 are same and greatest \n%i" , num1);
	else if (num1 == num2 && num1 < num3) 
		printf("Number 1 and Number 2 are same and number 3 is greatest \n%i" , num3);	
	if(num1 == num3 && num1 > num2)
		printf("Number 1 and Number 3 are same and greatest \n%i" , num1);
	else if (num1 == num3 && num1 > num2) 
		printf("Number 1 and Number 3 are same and number 1 is greatest \n%i" , num1);
	if(num3 == num2 && num1 > num3)
		printf("Number 2 and Number 3 are same and number 1 is greatest\n %i" , num1);
	else if (num3 == num2 && num1 < num3)
		printf("Number 2 and Number 3 are same and are greatest\n %i" , num2);
	if (num1 == num2 && num2 == num3)
		printf("All three numbers are same and Greatest");						
	return 0;
}

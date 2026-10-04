#include <stdio.h>
int main (){
	int num ; 
	int digit ;
	int even = 0;
	int odd = 0;
	printf("Enter Reading : ");
	scanf("%d" , &num);
	while (num>0){
		digit = num%10;
		if (digit % 2  == 0) even++;
		else odd++;
		printf("%d" , digit);
		num = num/10;
	}
	printf("Even digits are %d and odd digits are %d" , even , odd);
}

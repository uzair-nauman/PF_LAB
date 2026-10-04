#include <stdio.h>
int main (){
	int num ;
	int rev = 0 ;
	printf("Enter Number : ");
	scanf("%d" , &num); 
	while (num>0) {
		rev = (rev*10) + (num%10);
		num = num/10;		
	}
	printf("Reverse NUmber is %d" , rev);
}

#include <stdio.h>
int factorial(int num);
int main (){
	int n ;
	int sum ;
	printf("Enter N : ");
	scanf("%d" , &n);
	sum = (factorial(2*n))/((factorial(n+1))*(factorial(n)));
	printf("%d" , sum)	;
}
int factorial(int num){
 	int fact = 1 ;
	for(int i = 1 ; i<=num ; i++){
		fact = fact*i;
	}
	return fact ;
}

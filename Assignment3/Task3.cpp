#include <stdio.h>
int main(){
	int age ;
	float height;
	char grade;
	printf("Enter Age :");
	scanf("%i" , &age);
	getchar();
	printf("Enter Height :");
	scanf("%f" , &height);	
	printf("Enter Grade :");
	scanf(" %c" , &grade);
	getchar();
	printf("Age : %i\n" , age);
	printf("Height : %.2f\n" , height);
	printf("Grade : %c\n" , grade);
	return 0 ;
	
}

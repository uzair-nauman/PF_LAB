#include <stdio.h>
int main(){
	char name[20];
	int age ;
	char city[20];
	printf("Enter name : ");
	fgets(name , 20 , stdin);
	printf("Enter Age : ");
	scanf("%i" , &age);
	getchar();
	printf("Enter City :");
	fgets(city , 20 , stdin);
	printf("\nName : %s\n" , name);
	printf("\nAge : %i\n" , age);
	printf("\nCity : %s\n" , city);
	
	
	
	return 0 ;
}


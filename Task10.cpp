#include <stdio.h>
int main(){
	char name[20];
	int age;
	float height ; 
	char grade;
	float cgpa;
	printf("Enter name:");
	fgets(name , 20 , stdin);
	printf("\nEnter Age:");
	scanf("%i" , &age);
	printf("\nEnter Height:");
	scanf("%f" , &height);
	printf("\nEnter Grade:");
	scanf(" %c" , &grade);
	printf("\nEnter CGPA");
	scanf("%f" , &cgpa);
	printf("\n======Student Report======\n\n Name\t:%s\n Age\t:%i\n Height\t:%.2f\n Grade\t:%c\n CGPA\t:%.2f\n" , name , age , height , grade , cgpa);
	return 0 ;
}

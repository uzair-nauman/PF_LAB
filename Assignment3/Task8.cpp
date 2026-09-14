#include <stdio.h>
int main(){
	char name[100];
	printf("Enter full Name:");
	fgets(name , 100 , stdin);
	printf("Hello , \n");
	printf("%s\n" , name);
	return 0;
}

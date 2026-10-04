#include <stdio.h>
int main (){
	int attend ;
	int present = 0 ;
	int absent = 0 ;
	for(int i = 0 ; i<15 ; i++){
		printf("Enter 1 if Present and 0 for Absent");
		scanf("%d" , &attend);
		if (attend == 1) present++;
		else absent++; 
	}	
	printf("Number pof students present are %d and absent are %d" , present , absent);
}

#include <stdio.h>
int main (){
	int ob ;
	int per ;
	int batt ;
	printf("Enter 1 if an obstacle is detected otherwise 0 : ");
	scanf("%i" , &ob);
	printf("Enter 1 if an person is detected otherwise 0 : ");
	scanf("%i" , &per);
	printf("Enter battery percentage");
	scanf("%i" , &batt);
	if (ob==1){
	if (per ==1 )
	printf("Emergency stop");
	else 
	printf("change direction");
	}else{ 
	if (batt < 20)
	printf("Return to Charging Station"); 
	else 
	printf("continue moving");
	}
	return 0;
}

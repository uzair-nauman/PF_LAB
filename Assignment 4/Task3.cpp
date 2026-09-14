#include <stdio.h> 
int main (){
	int totalrec ; 
	int missrec ;
	int duprec ;
	int missdata ;
	int dupdata ;
	printf("Enter Total Reciords : "); 
	scanf("%i" , &totalrec);
	printf("Enter Missing Reciords : "); 
	scanf("%i" , &missrec);
	printf("Enter Duplicate Reciords : "); 
	scanf("%i" , &duprec);
	missdata = (missrec*100)/totalrec;
	dupdata = (duprec*100)/totalrec;
	if (totalrec<=0)
	printf("Invalid Dataset");
	else if (missdata > 30 )
	printf("Poor Quality Dataset");
	else if ( missdata <= 30 && ( dupdata > 20 ))
	printf("Dataset Requires Cleaning");
	else 
	printf("Dataset Ready for Training");
	return 0;
}

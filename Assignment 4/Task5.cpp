#include <stdio.h>
int main (){
	int ur ;
	int as ;
	int sl ;
	printf("Enter User role");
	scanf("%i" , &ur) ;
	printf("enter Account status");
	scanf("%i" , &as);
	printf("Enter security level") ;
	scanf("%i" , &sl);
	if (as == 0)
	printf("Access Denied");
	else{
	if (ur == 1 && sl >= 3)
	printf("Access Granted");
	else 
	printf("Access denied");
	if (ur=2 && sl >= 2)
	printf("Access Granted");
	else 
	printf("Access denied");
	if (ur == 3 && sl>=1)
	printf("Access Granted");
	else 
	printf("Access denied");
	
	}
}

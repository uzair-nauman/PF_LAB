#include <stdio.h>
int main () {
	int Age ;
	int Income ;
	int Cscore ;
	int Loan ;
	printf("Enter Age");
	scanf("%d" , &Age); 
	printf("Enter Income");
	scanf("%d" , &Income);
	printf("Enter Cscore");
	scanf("%d" , &Cscore);
	printf("Enter 1 if Any existing Loan else enter 0 : ");
	scanf("%d" , &Loan);
//	printf("%c" , Loan);
	if (Age >= 21 && Income >= 100000 && Cscore >= 750 && Loan == 0)
	printf("High Approval");
	else if (Age >= 21 && Income >= 75000 && Cscore >= 650 && Loan == 1)
	printf("Manual Review");
	else if (Age >= 21 && Income >= 50000 && Cscore >= 600 )
	printf("Possibly Eligible");
	else 
	printf("Rejected");
	return 0;
}

#include <stdio.h>
#include <math.h>
int main (){
	int choice ;
	int num ;
	int base ;
	int power ;
	float result ;
	float num1 ;
	printf("1. square root \n 2. power \n 3. absolute value \n 4. floor \n 5. Ceiling \n");
	printf("Enter choice : ");
	scanf("%d" , &choice);
	switch (choice){
		case 1 :
			printf("Enter number");
			scanf("%d" , &num);
			if (num >= 0) {
				result = sqrt(num);
				printf("Square root of %d is %.4f" , num , result);
				
			}
			else printf("Invalid Number");
			break ;
		case 2 :
			printf("Enter base");
			scanf("%d" , &base);
			printf("Enter power");
			scanf("%d" , &power);
			result = pow(base , power);
			printf("Result of %d ^ %d = %.0f" , base , power , result);
			break ;
		case 3 :
			printf("Enter number");
			scanf("%d" , num);
			result = fabs(num);
			printf("Absolute value of %d is %.0f");
			break ;
		case 4 :
			printf("Enter number");
			scanf("%f" , &num1);
			result = floor(num1);
			printf("Floor of %.2f is %.0f" , num1 , result);
			break ;
		case 5 :
			printf("Enter number");	
			scanf("%f" , &num1);
			result = ceil(num);
			printf("Ceiling of %.2f is %.0f", num1 , result);
			break ;			
	}
	
}

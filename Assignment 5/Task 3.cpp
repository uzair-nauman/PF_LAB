#include <stdio.h>
int main (){
	int op1 ;
	int op2 ;
	printf("Enter 1 for Animal 2 for Vehicle 3 for Food 4 for Human");
	scanf("%d" , &op1);
	switch (op1){
		case 1 :
			printf("Enter 1 for Cat 2 for Dog 3 for Bird");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Animal : Cat");
					break ; 
				case 2 :
					printf("Animal : Dog");	
					break ;
				case 3 :
					printf("Animal : Bird");
					break ;
			}
			break ;		
		case 2 :
			printf("Enter 1 for Car 2 for Bus 3 for Bike");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Vehicle : Car");
					break ; 
				case 2 :
					printf("Vehicle : Bus");	
					break ;
				case 3 :
					printf("Vehicle : Bike");
					break ;
			}
			break ;
		case 3 :
			printf("Enter 1 for Pizza 2 for Burger 3 for Biryani");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Food : Pizza");
					break ; 
				case 2 :
					printf("Food : Burger");	
					break ;
				case 3 :
					printf("Food : Biryani");
					break ;
			}
			break ;	
		case 4 :
			printf("Enter 1 for Male 2 for Female 3 for Child");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Human : Male");
					break ; 
				case 2 :
					printf("Human : Female");	
					break ;
				case 3 :
					printf("Human : Child");
					break ;
			}
			break ;
	}
}

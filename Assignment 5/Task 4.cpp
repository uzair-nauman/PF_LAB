#include <stdio.h>
int main (){
	int op1 ;
	int op2 ;
	printf("Enter 1 for Greeting 2 for Study 3 for Weather 4 for Help");
	scanf("%d" , &op1);
	switch (op1){
		case 1 :
			printf("Enter 1 for Hello 2 for How are you 3 for Goodbye");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Greeting : Hello");
					break ; 
				case 2 :
					printf("Greeting : How are you");	
					break ;
				case 3 :
					printf("Greeting : Goodbye");
					break ;
			}
			break ;		
		case 2 :
			printf("Enter 1 for Programming 2 for Mathematics 3 for AI");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Study : Programming ");
					break ; 
				case 2 :
					printf("Study : Mathematics");	
					break ;
				case 3 :
					printf("Study : AI");
					break ;
			}
			break ;
		case 3 :
			printf("Enter 1 for Today 2 for Tomorrow 3 for Forecast");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Weather : Today");
					break ; 
				case 2 :
					printf("Weather : Tomorrow");	
					break ;
				case 3 :
					printf("Weather : Forecast");
					break ;
			}
			break ;	
		case 4 :
			printf("Enter 1 for About Chatbot 2 for Commands 3 for Exit");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Help : About Chatbot");
					break ; 
				case 2 :
					printf("Help : Commands");	
					break ;
				case 3 :
					printf("Help : Exit");
					break ;
			}
			break ;
	}
}

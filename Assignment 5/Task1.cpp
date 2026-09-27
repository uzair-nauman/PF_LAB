#include <stdio.h>
int main() {
	int Pmarks  ; 
	int Mmarks  ;
	int Amarks  ;
	int Attendance ;
	int avg ;
	printf("Enter Marks of Programming");
	scanf("%d" , &Pmarks);
	printf("\nEnter Marks of Maths");
	scanf("%d" , &Mmarks);
	printf("\nEnter Marks of AI");
	scanf("%d" , &Amarks);
	printf("\nEnter attendance");
	scanf("%d" , &Attendance);
	avg = (Pmarks + Mmarks + Amarks)/3;
	if (Pmarks>=50 && Mmarks>=50 && Amarks>=50 && Attendance>=75){
	switch (int (avg/10)){
		case 10 :
		case 9 :			
		case 8 :
			printf("Excellent");
			break ;
		case 7 :
			printf("Very Good");
			break ;
		case 6:
			printf("Good");
			break ;
		case 5 :
			printf("Satisfactory");	
			break ;
		default :
			printf("Poor");
			break ;				
	}}
	else 
	printf("Student is not eligible");
	return 0;	
}

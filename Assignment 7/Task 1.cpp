#include <stdio.h>
int main (){
	char student_names[3][50] ;
	int marks[3][3];
	float avg[3];
	for (int i = 0 ; i<3 ; i++){
		printf("Enter full name");
		scanf(" %[^\n]" , student_names[i]);
		int sum = 0;
		printf("Enter 3 subjects marks\n");
		for(int j =0 ; j<3 ; j++){
			printf("mark %d : " , j+1);
			scanf("%d" , &marks[i][j]);
			sum = sum + marks[i][j];
		} 
		avg[i]=(float)sum/3;
	}
	for(int i = 0 ; i<3 ; i++){
		printf("Student : %25s Average Marks = %.2f\n" , student_names[i] , avg[i]);
	}
}

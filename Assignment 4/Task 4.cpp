#include <stdio.h>
int main (){
	int ma ; 
	int pl ;
	int mas ;
	printf("Enter Model Accuracy");
	scanf("%i" , &ma);
	printf("enter Prediction latency");
	scanf("%i" , &pl) ; 
	printf("enter Model Approval Status");
	scanf("%i" , &mas);
	if (ma<90) 
	printf("Accuracy too low");
	else if (pl > 100) 
	printf("Latency too High");
	else if (mas == 0) 
	printf("Model Not Approved");
	else 
	printf("Model can be deploy");
}

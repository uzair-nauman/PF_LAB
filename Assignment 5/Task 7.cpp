#include <stdio.h>
int main (){
	int confidence ;
	int threshold ;
	printf("Enter confidence score");
	scanf("%d" , &confidence);
	printf("Enter Threshold");
	scanf("%d" , &threshold);
	if (confidence >= 90) printf("Very High\n");
	else if (confidence >= 75) printf("High\n");
	else if (confidence >= 50) printf("Moderate\n");
	else printf("Low\n");
	if (confidence >= threshold && confidence >= 50) printf("Accepted");
	
}

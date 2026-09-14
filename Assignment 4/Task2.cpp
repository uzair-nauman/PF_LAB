#include <stdio.h>
int main(){
	int score;
	printf("Enter score"); 
	scanf("%i" , &score);
	if (score < 0 || score > 100 )
		printf("Invalid score");
	if (score >= 0 && score <= 49)
	printf("Low Confidence");
	if (score >= 50 && score <= 79)
	printf("Moderate Confidence");
	if (score >= 80 && score <= 100)
	printf("High Confidence");		
	return 0;
}

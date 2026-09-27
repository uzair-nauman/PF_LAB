#include <stdio.h>
int main () {
	int accuracy ;
	int confidence ;
	int dataset ;
	int user ;
	int status;
	int permission ;
	int score ;
	printf("Enter Accuracy : ");
	scanf("%d" , &accuracy);
	printf("Enter confidence : ");
	scanf("%d" , &confidence);
	printf("Enter datas set size : ");
	scanf("%d" , &dataset);
	printf("Enter User role : 1 for Admin , 2 for Developer , 3 for Researcher ");
	scanf("%d" , &user);
	printf("Enter Model Status : 1 for Ready , 2 for Testing , 3 for Training ");
	scanf("%d" , &status);
	printf("Enter permission : 1 for view , 2 for train , 4 for test , 8 for deploy");
	scanf("%d", &permission);
	if (accuracy >= 80 && confidence >= 75 && dataset >= 1000 && status == 1 && permission & 8)
	printf("Deployment Ready");
	else printf("Notr ready for Deployment");
	score = (accuracy + confidence)/2;	 
}

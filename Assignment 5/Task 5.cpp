#include <stdio.h>
int main (){
	int confidence ;
	int user ;
	printf("Enter confidence level : ");
	scanf("%d" , &confidence);
	printf("Enter 1 if you are authorized else enter 0 : ");
	scanf("%d" , &user);
	if (confidence >= 80) printf("Face Recognized\n");
	if (confidence >= 50 && confidence <= 79) printf("Manual Verification\n");
	if (confidence >= 80 && user == 1) printf("Access Granted\n");
	if (confidence <= 50 || user == 0) printf("Access Denied\n");
}

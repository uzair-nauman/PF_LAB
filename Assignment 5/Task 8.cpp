#include <stdio.h>
int main (){
	int view = 1 ;
	int train = 2 ;
	int test = 4 ;
	int deploy = 8 ;
	int permission ;
	printf("Enter permission (0 - 15)");
	scanf("%d", &permission);
	if (permission & view) printf("Permission to View\n");
	if (permission & train) printf("Permission to train\n");
	if (permission & test) printf("Permission to test\n");
	if (permission & deploy) printf("Permission to deploy\n");
	if (!(permission & (view | train | test | deploy))) printf("No Permissions are given\n");
	if (permission & train && permission & deploy) printf("Permission to both Training and deployment\n");
}

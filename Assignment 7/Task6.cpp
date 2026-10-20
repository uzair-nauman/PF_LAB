#include <stdio.h>
int main () {
	int shifts[4][3];
	int target ;
	int nrow[3];
	for(int i =0 ; i<3 ; i++){
		printf("Enter Row %d 3 shifts : " , i);
		for(int j =0 ; j<3 ; j++){
			scanf("%d" , &shifts[i][j]);
		}
	}
	printf("Enter the Target Row index : ");
	scanf("%d" , &target);
	printf("Enter 3 new Production values");
	for(int i =0 ; i<3 ; i++){
		scanf("%d" , &nrow[i]);
	}
	for(int i=3 ; i>target ; i--){
		for(int j=0 ; j<3 ; j++){
			shifts[i][j] = shifts[i-1][j];
		}
	}
	for(int i =0; i<3 ; i++){
		shifts[target][i]=nrow[i];
	}
	for(int i =0 ; i<4 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("%d\t", shifts[i][j]);
		}
		printf("\n");
	}
}

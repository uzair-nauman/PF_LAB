#include <stdio.h>
#include <stdlib.h>
int main(){
	int cat ;
	int total;
	int min = 1000;
	int low ;
	int up ; 
	int num ;
	printf("Enter Number of Book categories : ");
	scanf("%d" , &cat);
	int *arr = (int *)malloc(cat * sizeof(int));
	if (arr == NULL) printf("Memory Allocation failed");
	for (int i = 0 ; i<cat ; i++){		
		printf("Enter Stock of %d category : " , i+1);
		scanf("%d" , &arr[i]);
		total+=arr[i];
		if (arr[i] < min) low = i; 
}
	printf("If you want to update any stock enter 0");
	scanf("%d" , &up);
	if(!up){
		printf("Enter category number to be updated : ");
		scanf("%d" , &num);
		total-=arr[num-1];
		printf("Enter the updated stock : ");
		scanf("%d" , &arr[num-1]);
		total+= arr[num-1];
	}
	float avg = total/cat;
	printf("Total stock is %d \n Average stock is %.2f \n lowest stock category is %d \n" ,total , avg , low );
	free(arr);
	return 0 ;
	
}

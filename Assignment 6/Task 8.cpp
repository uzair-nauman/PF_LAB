#include <stdio.h>
int main (){
	int arr[8] ;
	int num ;
	int max = 1000 ;
	int min = 0 ;
	int search ;
	int insert ;
	int index ; 
	for (int i = 0 ; i<8 ; i++){
		printf("Enter Num ");
		scanf("%d" , &num);
		arr[i] = num;
		if (num<max) max = num ;
		if (num>min) min = num ;
	}
	printf("Enter number to search ");
	scanf("%d" , &search);
	for(int i = 0 ; i < 8 ; i++){
		if(search == arr[i]) printf("Searched number is at %d\n" , i);		
	}
	printf("Enter number to insert");
	scanf("%d" , &insert );
	printf("Enter index of where to insert ");
	scanf("%d" , &index);
	arr[index] = insert;
	printf("Enter index to delete element");
	scanf("%d" , &index);
	arr[index] = 0;
	for(int i = 0 ; i<8 ; i++){
		printf("the %d element is %d\n" , i+1 , arr[i]);
	} 
}

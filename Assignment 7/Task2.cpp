#include <stdio.h>
int main (){
	char logs[3][30] ;
	int c = 0 ;
	for(int i=0 ; i<3 ; i++){
		printf("Enter Entry in CSV Format : ");
		scanf(" %[^\n]" , logs[i]);
		
	}
	for(int i =0 ; i<3 ; i++){
		for(int j = 0 ; j<30 ; j++){
			if((logs[i][j] >= 65) && (logs[i][j]<=90)) c++;
		}
	}
	printf("%d" , c);
}

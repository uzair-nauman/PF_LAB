#include <stdio.h>
int main (){
	char word_grid[3][100];
	int bestrow ;
	int bestcol ;
	int len =0;
	int max = 0;
	int bestlen;
	int finish ;
	
	int col;
	for(int i=0 ; i<3 ; i++){
		printf("Enter String : ");
		scanf(" %[^\n]" , word_grid[i]);	
	}
	for(int i =0;i<3;i++){
		int col=0;
		for(int j =0 ; ;j++){
			if(word_grid[i][j] == ' ' || word_grid[i][j] == '\0' ){
				if (len>max){
					max=len;
					bestrow = i ;
					bestcol = col;
					bestlen = len;
					finish =j-1;
				}
				col++;
				len = 0;
		}
			else {
				len++;	
			}	
			if(word_grid[i][j] == '\0') break;	
			
		}
	}
	printf("Longest word is :");
	for (int k=finish-bestlen ; k<finish ; k++){
		printf("%c" , word_grid[bestrow][k]);
	}
	printf("\nmaximum length is \n %d row is %d\n column is %d" , bestlen , bestrow+1 , bestcol+1);
}

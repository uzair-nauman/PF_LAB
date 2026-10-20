#include <stdio.h>
int main (){
	char sentences[3][100];
	int c;
	for(int i=0; i<3 ; i++){
		printf("Enter Sentences : ");
		scanf(" %[^;]" , sentences[i]);
		scanf("%*c");
	}
	for(int i =0 ; i<3 ; i++){
		c=0;
		for(int j=0 ; j<100 ; j++){
			if(sentences[i][j]=='a' || sentences[i][j]=='e' || sentences[i][j]=='i' || sentences[i][j]=='o' || sentences[i][j]=='u' ) c++;
			else if(sentences[i][j]=='A' || sentences[i][j]=='E' || sentences[i][j]=='I' || sentences[i][j]=='O' || sentences[i][j]=='U' ) c++;
		}
		printf("\nin the sentece %s Vowels are %d" ,sentences[i] ,c);
	}
	
}

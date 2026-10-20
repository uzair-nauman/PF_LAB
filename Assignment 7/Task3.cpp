#include <stdio.h>
int main(){
	char secret_messages[3][100];
	for(int i = 0 ; i<3 ; i++){
		printf("Enter Message");
		scanf(" %[A-Z ]" , secret_messages[i]);
	}
	for(int i =0 ; i<3 ; i++){
		int wc=0;
		int sc=0;
		for(int j = 0 ; j<100 ; j++){
			if((secret_messages[i][j]>=65)&&(secret_messages[i][j]<=90)) wc++;
			if(secret_messages[i][j] == ' ') sc++;
		}
		printf("Total Words are %d\nTotal spaces are %d\n" , wc-1 , sc-1);	
	}

}

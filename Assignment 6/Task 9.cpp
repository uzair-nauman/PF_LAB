#include <stdio.h>
int main (){
	char word[100] ;
	int i = 0;
	char rev[100] ;
	int x = 0 ;
	char check ;
	int vowel = 0 ;
	int constant = 0 ;
	int palindrome = 1 ;
	printf("Enter word : ");
	scanf("%99s" , word);
	while (word[i]!='\0'){
		i++	;
	}
	printf("Length of word is %d\n" , i);
	for (int j = 0 ; j<i ; j++){
		rev[j] = word[i-1-j];
		
	}
	for (int y = 0 ; y<i ; y++){
		if (rev[y] != word[y]) {
			palindrome = 0;
			break ;		
		}
	}
	if (palindrome) printf("Word is Palindrome\n");
	else printf("Word is not a Palindrome\n");
	for (int z = 0 ; z<i ; z++){
		check = word[z] ;
		switch(check){
			case 'a' :
				vowel++;
				break;
			case 'e' :
				vowel++;
				break;
			case 'i' :
				vowel++;
				break;
			case 'o' :
				vowel++;
				break;
			case 'u' :
				vowel++;
				break;
			default :
				constant ++	;				
		}
	}
	printf("Vowels are %d \nconstants are %d\n" , vowel , constant);	
}

#include <stdio.h>
int main (){
	int code ;
	int rev = 0 ;
	int og ;
	printf("Enter code : ");
	scanf("%d" , &code);
	og = code ;
	while (code>0) {
		rev = (rev*10) + (code%10);
		code = code/10;		
	}
	printf("%d\n" , rev);
	if (og == rev) printf("Number is Palindrome");
	else printf("Number is not a palindrome");
}

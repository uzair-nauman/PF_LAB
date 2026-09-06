#include <stdio.h>
int main(){
	char pname[20];
	int quant;
	float price;
	printf("Enter Product Name: ");
	scanf("%s" , &pname);
	printf("Enter Quantity: ");
	scanf("%i" , &quant);
	getchar();
	printf("Enter Price: ");
	scanf("%f" , &price);
	getchar();
	printf("Product Name: %s\n" , pname);
	printf("Quantity: %i\n", quant);
	printf("Price: %.2f\n" , price);
	return 0 ;
}

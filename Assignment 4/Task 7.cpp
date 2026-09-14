#include <stdio.h>
int main (){
	float data ;
	float price ;
	float bc ;
	float fc ;
	int disc ;
	printf("enter Data Usage in GB");
	scanf("%f" , &data);
	getchar();
	printf("enter price per GB");
	scanf("%f" , &price);
	getchar();
	bc=data * price;
	if (data >=50 && data <=99){
	fc = bc*0.95;
	disc=5;}
	else if (data >=100 && data <=199) {
		fc = bc*0.9;
		disc = 10;}
	else if (data >=200){
		fc = bc*0.85;
		disc = 15;	
	}	
	else {
		fc = bc ;
		disc=0;		
	}	
	printf("base cost is %.2f \n Discount is %i \n Final cost is %.2f" , bc , disc , fc);
	return 0;			
					
}	
	
	




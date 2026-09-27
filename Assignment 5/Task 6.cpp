#include <stdio.h>
int main (){
	int op1 ;
	int op2 ;
	printf("Enter 1 for Classification , 2 for Regression , 3 for Clustering , 4 for Computer Vision");
	scanf("%d" , &op1);
	switch (op1){
		case 1 :
			printf("Enter 1 for logistic Regression , 2 for Decision tree , 3 for KNN");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Classification : Logoistic Regression");
					break ; 
				case 2 :
					printf("Classification : Decision tree");	
					break ;
				case 3 :
					printf("Classification : KNN");
					break ;
			}
			break ;		
		case 2 :
			printf("Enter 1 for Linear Regression , 2 for Polynomial Regression , 3 for SVR");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Regression : Linear Regression  ");
					break ; 
				case 2 :
					printf("Regression : Polynomial Regression ");	
					break ;
				case 3 :
					printf("Regression : SVR");
					break ;
			}
			break ;
		case 3 :
			printf("Enter 1 for K-Means , 2 for Hiearchial Clustering , DBSCAN");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Clustering : K-Means");
					break ; 
				case 2 :
					printf("Clustering : Hiearchial Clustering");	
					break ;
				case 3 :
					printf("Clustering : DBSCAN");
					break ;
			}
			break ;	
		case 4 :
			printf("Enter 1 for CNN , 2 for YOLO , 3 for R-CNN");
			scanf("%d" , &op2);
			switch (op2){
				case 1 :
					printf("Computer Vision : CNN");
					break ; 
				case 2 :
					printf("Computer Vision : YOLO");	
					break ;
				case 3 :
					printf("Computer Vision : R-CNN");
					break ;
			}
			break ;
	}
}

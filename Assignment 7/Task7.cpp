#include <stdio.h>
int main(){
	float sensor_data[3][4];
	int r,c,target;
	printf("Enter Temperature");
	for(r=0;r<3;r++){
		printf("Day %d readings of 4 sensors" , r+1 );
		for (c=0 ; c<4 ; c++){
			scanf("%f" , &sensor_data[r][c]);
		}
	}
	printf("Enter column to be removed");
	scanf("%d" , &target);
	for (r=0 ; r<3 ; r++){
		for(c=target ; c<3 ; c++){
			sensor_data[r][c] = sensor_data[r][c+1];
		}
	}
	printf("\nUpdated 3x3 \n");
	for(r=0; r<3 ; r++){
		for(c=0 ; c<3 ; c++){
			printf("%.2f\t" , sensor_data[r][c]);
		}
		printf("\n");
	}
	return 0;
}

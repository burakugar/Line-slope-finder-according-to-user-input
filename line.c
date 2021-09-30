#include <stdio.h>
	#include <stdlib.h>
	typedef struct line{ /* structure for the line element */
		float x1;
		float y1;
		float x2;
		float y2;
		float x3;
		float y3;
		float slope;
	}line;

    void calculateSlope(line line1){
		printf("Calculating Slope and y3\n");
		printf("Please enter the coordinates in order x1,x2,x3,y1,y2\n");
		scanf("%f %f %f %f %f",&line1.x1,&line1.x2,&line1.x3,&line1.y1,&line1.y2);
		float slope= (float) ((line1.y2)-(line1.y1))/(float) ((line1.x2)-(line1.x1)); /* calculating the slope */
		float b= line1.y1-slope*line1.x1; /* calculating the constant which is b*/
		line1.y3=b+slope*line1.x3; /*calculating the y3 with using b and slope */
		printf("Calculated Slope is: %f\n",slope);
		printf("Calculated y3 is: %f\n",line1.y3);
		} 
	
	int main(){
		struct line line1; /* new line struct */
		calculateSlope(line1);
		return 0;
	}

#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,y1,y2;
	float distance;
	printf("Enter point 1 (x1,y1)\n");
	scanf("%f %f",&x1,&y1);
	printf("Enter point 2 (x2,y2)\n");
	scanf("%f %f",&x2,&y2);
	distance = sqrt(pow((x1-x2) ,2) + pow((y1-y2) ,2));
	printf("Distance between those two points (%0.1f,%0.1f) and (%0.1f,%0.1f) is %0.2f \n",x1,y1,x2,y2,distance);
	return 0;
}


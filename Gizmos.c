//Q. 9:

//Gizmos(Input & Ouput )

//An online retailer sells two products: widgets and gizmos.
//Each widget weighs 75 grams and Each gizmo weighs 112 grams.
//Write a program that reads the number of widgets and the number of gizmos in an order from the user.
//Then your program should compute and display the total weight of the order.
//


#include <stdio.h>
int main() 
{
	int w,g;
  	float f;
  	scanf("%d%d",&w,&g);
    printf("widgets=%d\n",w);
  	printf("gizmo=%d\n",g);
  	f=(w*75)+(g*112);
  	f=f/1000;
  	printf("Total weight=%.3f",f);
	return 0;
}

//Q. 94:

//FENCING THE GROUND(Practice Session )

//The college ground is rectangular in shape. The Management decides to build a fence around the ground. In order to help the construction workers to build a straight fence, they planned to place a thick rope around the ground. They wanted to buy only the exact length of the rope that is needed. They also wanted to cover the entire ground with a thick carpet during rainy season. They wanted to buy only the exact quantity of carpet that is needed. They requested your help.
//Can you please help them by writing a C program to find the exact length of the rope and the exact quantity of carper that is required?
//Input Format:
//Input consists of 2 integers. The first integer corresponds to the length of the ground and the second integer corresponds to the breadth of the ground.
//


#include <stdio.h>
int main()
{
	int l,b;
  	scanf("%d%d",&l,&b);
  	printf("Required length is %d m\nRequired quantity of carpet is %d sqm",2*(l+b),l*b);
	return 0;
}

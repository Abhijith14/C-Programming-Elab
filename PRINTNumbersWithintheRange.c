//Q. 36:

//PRINT Numbers Within the Range(Control and Looping )

//Write a C program to print all numbers between a and b ( a and b inclusive) using a while loop.
//Input format:
//Input consists of 2 integers. The first integer corresponds to a and the second integer corresponds to b . Assume a>=b.
//Output format:
//Refer sample input and output for formatting specifications.
//


#include <stdio.h>
int main() 
{
	int a,b,i;
  	scanf("%d%d",&a,&b);
  	for(i=a;i>=b;i--)
    {
      if(a==b)
        printf("No Number");
      else
        printf("%d ",i);
    }
	return 0;
}

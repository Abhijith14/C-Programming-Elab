//Q. 33:

//SESSION: Control and Looping( )

//Write a program to generate a following #s triangle:
//# # # # #
//# # # #
//# # #
//# #
//#
//


#include <stdio.h>
int main() 
{
	int n,i,j;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
    {
      for(j=n;j>i;j--)
        printf("#");
      printf("\n");
    }
	return 0;
}

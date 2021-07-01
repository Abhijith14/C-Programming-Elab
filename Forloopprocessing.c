//Q. 31:

//For loop processing(Control and Looping )

//Program to calculate the sum of first n natural numbers
//


#include <stdio.h>
int main()
{
  	int N,s=0,i;
  	scanf("%d",&N);
	for(i=1;i<=N;i++)
    {
      s=s+i;
    }
  	printf("%d",s);
	return 0;
}

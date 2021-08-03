//Q. 64:

//Power of 2(Functions )

//Given a number , find whether it is a power of 2 or not
//NOTE There is a limit in Source code.
//Input
//The first Line contains T , the no of test cases followed by T lines.
//Each line has a integer X
//Output
//Output has T lines , with each line indicating whether the number is a power of 2 or not(print 1 if it a power of two else print 0).
//


#include <stdio.h>
int Test(int n)
{
  	if(n==0)
      return 0;
    while(n!=1)
    {
        if(n%2!=0)
            return 0;
        n=n/2;
    }
    return 1;
}
 
int main()
{
    int T,i,num;
    scanf("%d",&T);
  	for(i=0;i<T;i++)
    {
    	scanf("%d",&num);
  		printf("%d\n",Test(num));
    }
    return 0;
}

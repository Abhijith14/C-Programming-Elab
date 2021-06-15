//Q. 16:

//Prime Factors(Data types )

//Helan had to find a number that must be the sum of two prime numbers. Help him to write a C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
//


#include <stdio.h>
int prime(int n)
{  
    int i,flag=0;
    for (i=2;i<=n/2;++i) 
    {
    	if(n%i==0) 
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
    	return 0;
}
int main()
{
	int num,i,f;
  	scanf("%d",&num);
  	for(i=2;i<=num/2;i++)
    {
      if(prime(i)==1)
      {
        if(prime(num-i)==1)
        {
             printf("%d = %d + %d\n",num,i,num-i);
             f=1;
        }
      }
    }
    if(f==0)
      printf("NOT");
	return 0;
}

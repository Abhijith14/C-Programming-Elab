//Q. 63:

//Recursion 4 : Sum of digits(Functions )

//Write a program to find the sum of digits in a number using recursion.
//Input and Output Format:
//Input consists of a nonnegative integer.
//Refer sample input and output for formatting specifications.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
int sum(int n) 
{ 
    if(n==0) 
       return 0; 
    return(n%10+sum(n/10)); 
} 
int main()
{
	int i,n;
  	scanf("%d",&n);
  	printf("The sum of digits in %d is %d",n,sum(n));
	return 0;
}

//Q. 96:

//Sum of Negative Numbers(Practice Session )

//Write a program to find the sum of negative numbers in an array.
//Input Format:
//Input consists of n+1 integers. The first integer corresponds to n , the size of the array. The next n integers correspond to the elements in the array. Assume that the maximum value of n is 15.
//Output Format:
//Refer sample output for details.
//


#include <stdio.h>
int main() 
{
	int i,n,Ar[15],s=0;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
 		scanf("%d",&Ar[i]);
  	for(i=0;i<n;i++)
    {
      if(Ar[i]<0)
        s=s+Ar[i];
    }
  	printf("sum=%d",s);
	return 0;
}

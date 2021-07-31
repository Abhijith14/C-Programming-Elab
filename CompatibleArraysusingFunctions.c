//Q. 61:

//Compatible Arrays using Functions(Functions )

//Two arrays are said to be compatible if they are of the same size and if the ith element in the first array is greater than or equal to the ith element in the second array for all i.Write a program to find whether 2 arrays are compatible or not.
//Input Format:
//Input consists of 2n+1 integers. The first integer corresponds to n , the size of the array. The next n integers correspond to the elements in the first array. The last n integers correspond to the elements in the second array. Assume that the maximum value of n is 15.
//


#include <stdio.h>
int main()
{
	int n,i,A[30],B[30],f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        scanf("%d",&B[i]);
    for(i=0;i<n;i++)
    {
      if(A[i]>=B[i])
        f=1;
      else
        f=0;
    }
    if(f==1)
      printf("Compatible");
    else
      printf("Incompatible");
	return 0;
}

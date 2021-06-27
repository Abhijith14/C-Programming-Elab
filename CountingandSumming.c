//Q. 28:

//Counting and Summing(Operators )

//Return the count of positives numbers and the sum of negative numbers for the given array.
//


#include <stdio.h>
int main() 
{
	int i,l,Ar[30],c=0,s=0;
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
    {
      scanf("%d",&Ar[i]);
    }
  	for(i=0;i<l;i++)
    {
      if(Ar[i]>0)
        c++;
      else
        s=s+Ar[i];
    }
  	printf("%d\n%d",c,s);
	return 0;
}

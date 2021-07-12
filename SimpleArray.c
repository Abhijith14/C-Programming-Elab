//Q. 43:

//Simple Array(Arrays )

//Calculate average of n numbers
//


#include <stdio.h>
int main()
{
	int i,l,s=0,avg;
    int Ar[10];
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
      scanf("%d",&Ar[i]);
  	for(i=0;i<l;i++)
    {
      s=s+(int)Ar[i];
    }
  	avg=s/l;
  	printf("%d",avg);
	return 0;
}

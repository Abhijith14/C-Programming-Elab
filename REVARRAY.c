//Q. 82:

//REV ARRAY(Pointers )

//program using pointers to read in an array of integers and print its elements in reverse order
//


#include <stdio.h>
int main() 
{
	int i,n;
  	int Ar[30],*p;
    p=&Ar[0];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",p);
      p++;
    }
    p=&Ar[n-1];
    for(i=n-1;i>=0;i--)
    {
      printf("%d ",*p);
      p--;
    }
	return 0;
}

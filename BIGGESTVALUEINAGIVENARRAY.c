//Q. 88:

//BIGGEST VALUE IN A GIVEN ARRAY(Pointers )

//Find biggest value in the array using pointers in C
//


#include <stdio.h>
#include <string.h>
int main() 
{
	int *p,n,i,Ar[10];
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
      scanf("%d",&Ar[i]);
  	p=&Ar[0];
  	for(i=0;i<n;i++)
    {
      if(Ar[i]>*p)
        *p=Ar[i];
    }
  	printf("%d",*p);
  	return 0;
}

//Q. 46:

//Occurrence(Arrays )

//There was a group of elements in which there may be repeated elements. So there was a task to find occurrence of an element in one dimensional array. Write a C program for this scenario
//


#include <stdio.h>
int main() 
{
	int l,Ar[30],f,i,c=0;
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
      scanf("%d",&Ar[i]);
  	scanf("%d",&f);
  	for(i=0;i<l;i++)
    {
    	if(Ar[i]==f)
          c++;
    }
  	printf("%d",c);
    return 0;
}

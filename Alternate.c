//Q. 45:

//Alternate(Arrays )

//There is a machine in a lab which is working not properly. It displays the alternative elements in a set of input. The lab instructor asked the students to write a C Program for this scenario. i.e. to Print the Alternate Elements in an Array
//


#include <stdio.h>
int main() 
{
	int i,l,Ar[30];
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
    	scanf("%d",&Ar[i]);
    for(i=0;i<l;i+=2)
      printf("%d ",Ar[i]);
	return 0;
}

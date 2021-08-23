//Q. 85:

//Pointer 3(Pointers )

//Write a program to subtract two double values using pointer
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output
//


#include <stdio.h>
int main()
{
	double a,b;
  	double *n1,*n2;
  	scanf("%lf%lf",&a,&b);
    n1=&a;
  	n2=&b;
  	printf("%.2lf",*n1-*n2);
	return 0;
}

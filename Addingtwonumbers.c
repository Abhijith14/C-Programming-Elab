//Q. 81:

//Adding two numbers(Pointers )

//Add two numbers using pointers
//


#include <stdio.h>
int main() 
{
  	int n1,n2;
	int* a;
  	int* b;
  	scanf("%d%d",&n1,&n2);
  	a=&n1;
  	b=&n2;
  	printf("The sum of the entered numbers is=%d",*a+*b);
	return 0;
}

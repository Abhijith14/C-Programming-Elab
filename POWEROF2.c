//Q. 65:

//POWER OF 2(Functions )

//Ram challenges Ganga to write a code to check whether an Integer Number is power of two (2) or not. Can you help Ganga to come out of this problem.
//


#include <stdio.h>
#include <math.h>
void Test(int n)
{
 if(ceil(log2(n))==floor(log2(n)))
    printf("YES");
 else
    printf("NO");
}
int main() 
{
	int n;
  	scanf("%d",&n);
  	Test(n);
	return 0;
}

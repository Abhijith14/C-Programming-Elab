//Q. 23:

//SUM IT NOW(Operators )

//Nilo and Teena are playing with each other. Nilo challenges Teena to sum the digit of a number. Help Teena to answer as quick as possible.
//


#include <stdio.h>
int main() 
{
	int n,s=0,rem;
  	scanf("%d",&n);
    while(n!=0)
    {
      rem=n%10;
      s=s+rem;
      n=n/10;
    }
    printf("%d",s);
    return 0;
}

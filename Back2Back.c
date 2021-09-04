//Q. 97:

//Back 2 Back(Practice Session )

//Rand has a task to find the sum of first and last digit of number upto given n numbers.Help him in
//writing C code to enter any number and find the sum of first and last digit of the number using for loop.
//


#include <stdio.h>
int main() 
{
	int n,i,t,s;
    scanf("%d",&n);
    t=n;
    s=t%10;
    t=t/1000;
  	s=s+t;
    printf("%d",s);  
	return 0;
}

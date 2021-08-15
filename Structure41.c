//Q. 77:

//Structure 41(Structures and Unions )

//Write a program to read display add and subtract of two time variables defined using hours , minutes and seconds using typdef and passing structure variable as argument in functions.
//Input and Output Format:
//Refer sample input and output for formatting specification
//


#include <stdio.h>
typedef struct Time
{
    int h,m,s;
}T;
void ADD(T t1,T t2)
{
  int a,b,c;
  a=t1.h+t2.h;
  b=t1.m+t2.m;
  c=t1.s+t2.s;
  printf("%d hrs\n%d min\n%d sec",a,b,c);
}
int main()
{
	T t1,t2;
    scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
  	scanf("%d%d%d",&t2.h,&t2.m,&t2.s);
  	ADD(t1,t2);
	return 0;
}

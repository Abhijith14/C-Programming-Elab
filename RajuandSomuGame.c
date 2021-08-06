//Q. 68:

//Raju and Somu Game(Functions )

//Raju was playing game with somu. Raju will tell set of positive numbers and negative numbers. Somu need to tell the sum of positive numbers and sum of negative numbers. Kindly help Raju and Somu to complete the task.
//


#include <stdio.h>
void display(int a,int b)
{
  printf("Sum of positive elements is:%d\n",a);
  printf("Sum of negative elements is:%d\n",b);
}
int main() 
{
	int n,Ar[30],i,s1=0,s2=0;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
      scanf("%d",&Ar[i]);
  	for(i=0;i<n;i++)
    {
      if(Ar[i]>0)
        s1=s1+Ar[i];
      else
        s2=s2+Ar[i];
    }
  	display(s1,s2);
	return 0;
}

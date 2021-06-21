//Q. 22:

//Near prime(Operators )

//You are on your way to find the gifts. All the gifts lie in your path in a straight line at prime numbers and your house is at 0.Given your current position find the closest gift to your position, and calculate the distance between your current position and gift and tell the distance.
//For the number= 0, the output is 2.
//The closest prime number to 0 is 2, so the answer is 2 - 0 = 2.
//For number = 11, the output should be 0.
//11 is a prime number, so the answer is 11 - 11 = 0
//For the number 16, the closest prime is 17
//So Output 17-16=1
//For the number 24, the closes prime is 29
//So Output 29-24=5
//Input/Output
//[time limit] 3000ms [input] string number
//Constraints: 0 int(number) 9 1014
//


#include <stdio.h>
int prime(int n)
{  
    int i,flag=0;
    for (i=2;i<=n/2;++i) 
    {
    	if(n%i==0) 
        {
            flag=1;
            
            break;
        }
    }
    if(flag==0)
        return 1;
    else
    	return 0;
}
int check(int n)
{
  int i,c=0;
  for(i=n;c<10;i++,c++)
  {
    if(prime(i)==1)
    {
      
      break;
    }
  }
  return (i-n);
}
int main()
{
	int num;
  	scanf("%d",&num);
  	printf("%d",check(num));
  	return 0;
}

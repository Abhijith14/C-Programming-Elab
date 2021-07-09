//Q. 40:

//Number game(Control and Looping )

//"Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.
//Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .
//Input
//The first line of the input contains T testcases, T lines follow
//Each of T line contains an integer N which has to be tested for primality
//Output
//For each test case output in a separate line, ""yes"" if the number is prime else ""no""
//Constraints
//1<=T<=20
//1<=N<=10000
//1<=M<=10000 "
//


#include <stdio.h>
int prime(int n)
{  
    int i,flag=0;
    for (i=2;i<=n/2;++i) 
    {
    	if(n%i==0) 
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
    	return 0;
}
int main() 
{
	int i,T,num;
  	scanf("%d",&T);
  	for(i=0;i<T;i++)
    {
      scanf("%d",&num);
      if(prime(num)==1)
        printf("yes\n");
      else
        printf("no\n");
    }
	return 0;
}

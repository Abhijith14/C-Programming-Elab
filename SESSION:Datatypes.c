//Q. 14:

//SESSION: Data types( )

//Puck, the trickster, has again started troubling people in your city.
//The people have turned on to you for getting rid of Puck. Puck presents to you a number consisting of numbers from 0 to 9 characters.
//He wants you to reverse it from the final answer such that the number becomes Palindrome number.
//A Palindrome is a number which equals its reverse. The hope of people are on you so you have to solve the riddle.
//You have to tell if some number exists which you would reverse to convert the number into palindrome.
//


#include <stdio.h>
#include <string.h>
int main()
{   
  	int n,t,rem,rev=0;
  	scanf("%d",&n);
  	t=n;
  	while(t!=0) 
  	{
        rem=t%10;
        rev=rev*10+rem;
        t/=10;
  	}
	if(n==rev)
		printf("Mirror Image");
	else
		printf("Not a Mirror Image");
	return 0;
}

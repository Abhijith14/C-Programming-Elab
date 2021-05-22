//Q. 1:

//Valid Perfect Square(Input & Ouput )

//Get a positive integer. Check the number whether perfect square or not. Print TRUE when the integer is perfect square.If it is not, return FALSE.
//Input format: The input is verified whether the number is perfect square or not.
//Output format: Whether the input is perfect square then true is returned, else it should return false.
//EXPLANATION: Get a non-negative integer from the user. Check it whether it is perfect square or not by using arithmetic functions. Print True when it is valid perfect square integer. If the integer is not valid perfect square integer, then print False.
//Note: Do not use any inbuilt function.
//


#include <stdio.h>
#include <math.h>
int main() 
{
	int num;
    double ans;
  	scanf("%d",&num);
  	ans=sqrt(num);
    if(roundf(ans)==ans) 
       	printf("TRUE");
	else 
        printf("FALSE");
	return 0;
}

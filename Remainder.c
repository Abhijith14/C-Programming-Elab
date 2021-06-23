//Q. 24:

//Remainder(Operators )

//Write a program to find the remainder when two given numbers are divided. he first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B. Find remainder when A is divided by B
//


#include <stdio.h>
int main() 
{
	int T,i,A,B;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    	scanf("%d%d",&A,&B);
        printf("%d\n",A%B);
    }
	return 0;
}

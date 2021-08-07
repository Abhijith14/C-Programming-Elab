//Q. 69:

//Recursive Functions(Functions )

//Write a C program for Sum of Natural Numbers Using Recursion.
//


#include <stdio.h>
int Numbers(int n) 
{
   if(n!=0)
     return (n+Numbers(n-1));
   else
     return n;
}
int main() 
{
    int num;
    scanf("%d", &num);
    printf("%d",Numbers(num));
    return 0;
}

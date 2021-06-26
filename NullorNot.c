//Q. 27:

//Null or Not(Operators )

//George doesnt have a clear vision to understand whether the number is null or not. If we write a programming language means, it is very easy to understand. Help George to write a C program to check whether the given number is null or not
//


#include <stdio.h>
int main()
{
   int num;
   scanf("%d",&num);
   if(num==0)
     printf("NULL");
   else
     printf("NOT NULL");
   return 0;
}

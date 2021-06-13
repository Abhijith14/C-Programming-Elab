//Q. 13:

//Moving Coins(Data types )

//A triangle can be classified based on the lengths of its sides as equilateral, isosceles or scalene.
//All 3 sides of an equilateral triangle have the same length.
//An isosceles triangle has two sides that are the same length, and a third side that is a different length.
//If all of the sides have different lengths then the triangle is scalene.
//Write a program that reads the lengths of 3 sides of a triangle from the user. Display a message indicating the type of the triangle.
//


#include <stdio.h>
int main() 
{
	int a,b,c;
  	scanf("%d%d%d",&a,&b,&c);
  	if(a==b)
    {
      if(b==c)
      	printf("equilateral");
      else
        printf("isosceles");
    }
  	else if(a!=b)
    {
      if(b==c)
        printf("isosceles");
      else
        printf("scalene");
    }
  	else if(a==c)
    {
      if(b==c)
      	printf("equilateral");
      else
        printf("isosceles");
    }
  	else if(a!=c)
    {
      if(b==c)
        printf("isosceles");
      else
        printf("scalene");
    }
	return 0;
}

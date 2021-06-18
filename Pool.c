//Q. 19:

//Pool(Data types )

//You are planning to go for swimming classes. You would prefer to enroll in the center which has the swimming pool of a greater area. In the first centre that you visit, the swimming pool is a circular shape(radius-r). In the next centre that you visit, the swimming pool is of a square shape (side-S). Write a program that will help you to make the choice of the swimming pool.
//Input :
//Input consists of 2 integers. The first integer correspond to the radius (r) of the circular swimming pool, The second integer corresponds to the side (S) of the square swimming pool.
//


#include <stdio.h>
int main() 
{
	int r,s;
  	float ar,as;
  	scanf("%d%d",&r,&s);
  	ar=3.14*r*r;
  	as=s*s;
  	if(ar>as)
      printf("I prefer centre 1");
  	else
      printf("I prefer centre 2");
	return 0;
}

//Q. 73:

//THREE MARKS(Structures and Unions )

//Mani Working as a professor in ABC college, have
//to get students three subjects points.
//so he planned to do one program to implement
//structure concept.
//Input
//3 3 5
//Output
//3 3 5
//


#include <stdio.h>
struct Mark
{
  int a,b,c;
};
int main()
{
	struct Mark M;
  	scanf("%d%d%d",&M.a,&M.b,&M.c);
  	printf("%d\n%d\n%d",M.a,M.b,M.c);
	return 0;
}

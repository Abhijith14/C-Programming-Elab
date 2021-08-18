//Q. 80:

//AVERAGES(Structures and Unions )

//Menan Working as a professor in ABC college, have to get students three subjects marks and display average.
//so he planned to do one program to implement structure concept.
//Input
//15 16 39
//Output
//15 16 39 23
//


#include <stdio.h>
struct Marks
{
  int a,b,c;
  int avg,s;
};
int main()
{
	struct Marks M;
  	scanf("%d%d%d",&M.a,&M.b,&M.c);
  	M.s=0;
  	M.s=M.a+M.b+M.c;
  	M.avg=M.s/3;
  	printf("%d %d %d %d",M.a,M.b,M.c,M.avg); 
	return 0;
}

//Q. 72:

//Printing next 5 numbers(Structures and Unions )

//A new game was introduced in a school for students of 3 standard, In which the student should tel next
//5 numbers sequence from the telling number. Using union help to the students to solve it.
//Input Method
//Integer ranges from 1 to 999
//Output Method
//Sequence of next 5 numbers
//Mandatory:
//Use union concept
//


#include <stdio.h>
union Game
{
	int num;
};
int main()
{
	union Game G;
  	int i;
  	scanf("%d",&G.num);
	for(i=0;i<5;i++)
      printf("%d ",++G.num);
    return 0;
}

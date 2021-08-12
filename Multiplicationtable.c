//Q. 74:

//Multiplication table(Structures and Unions )

//Veena telling tables to her friend saradha, for every no of saradha veena telling tables upto 5,
//help to her to write code to solve the task.
//Input Method
//Integer ranges from 1 to 999
//Output Method
//Multiplication table upto 5
//


#include <stdio.h>
struct Multiply
{
  	int num;
};
int main() 
{
	struct Multiply M;
  	scanf("%d",&M.num);
  	int i;
  	for(i=1;i<=5;i++)
    {
     	printf("%d*%d=%d\n",i,M.num,i*M.num); 
    }
	return 0;
}

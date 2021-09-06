//Q. 99:

//Structures - 39(Practice Session )

//write a program to read and display the information of all the students in the class. THen edit the details of i the student and redisplay the entire information
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
struct Stud
{
  int n,fees;
  char name[30],Date[10];
}S[5];
int main() 
{
	int i,T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
      scanf("%d",&S[i].n);
      scanf("%s",S[i].name);
      scanf("%s",S[i].Date);
      scanf("%d",&S[i].fees);
    }
    for(i=0;i<T;i++)
       printf("Roll no:%d\nName:%s\nDOB:%s\nFees:%d\n",S[i].n,S[i].name,S[i].Date,S[i].fees);
    return 0;
}

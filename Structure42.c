//Q. 76:

//Structure 42(Structures and Unions )

//Write a program , using a pointer to a structure to initialize the members of the structure to display the students course registration details where details of first student initialized in the program and details of second student get from the user , then display the details of both student 1 and student 2
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//Note:
//Use structure and union concepts
//


#include <stdio.h>
struct Stud
{
	int roll,fees;
  	char name[30],C[10];
};
int main() 
{
	struct Stud *p,S;
  	p=&S;
  	scanf("%d",&p->roll);
    scanf("%s",p->name);
  	scanf("%s",p->C);
  	scanf("%d",&p->fees);
  	printf("Roll no:%d\nName:%s\nCourse:%s\nFees:%d\n",p->roll,p->name,p->C,p->fees);
	return 0;
}

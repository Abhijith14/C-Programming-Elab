//Q. 5:

//Calculate Grade(Input & Ouput )

//Write a program that accepts the marks in 3 subjects of a student , calculates the average mark of the student and prints the student's grade. If the average mark is greater than or equal to 90, then the grade is 'A'. If the average mark is 80 and between 80 and 90, then the grade is 'B'.
//If the average mark is 70 and between 70 and 80, then the grade is 'C'. If the average mark is 60 and between 60 and 70, then the grade is 'D'. If the average mark is 50 and between 50 and 60, then the grade is 'E'. If the average mark is less than 50, then the grade is 'F'.
//Input Format:
//Input consists of 3 lines. Each line consists of an integer.
//Output Format:
//Output consists of a single line. Refer sample output for the format.
//


#include <stdio.h>
int main() 
{
	int m1,m2,m3,s;
  	float avg;
  	scanf("%d",&m1);
  	scanf("%d",&m2);
  	scanf("%d",&m3);
  	s=m1+m2+m3;
  	avg=(float)s/3;
  	if(avg>=90)
  	  printf("The grade is A");
  	else if(avg>=80&&avg<90)
      printf("The grade is B");
  	else if(avg>=70&&avg<80)
      printf("The grade is C");
  	else if(avg>=60&&avg<70)
	  printf("The grade is D");
  	else if(avg>=50&&avg<60)
	  printf("The grade is E");
  	else if(avg<50)
      printf("The grade is F");
	return 0;
}

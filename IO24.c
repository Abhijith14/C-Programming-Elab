//Q. 6:

//IO 24(Input & Ouput )

//Selvan from SRM Public school is studying 3r grade in school, her maths mam gave her a problem to convert the decimal number in octal and hexadecimal . Since her mam gave so much problems to solves.She went to his brother who is computer programmer and requested to create a program that converts automatically given integer to decimal, octal and hexadecimal equivalent. Let us help an programmer to do program?
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
int main()
{
	int num;
  	scanf("%d",&num);
  	printf("Decimal value:%d\n",num);
  	printf("Octal value:%o\n",num);
  	printf("Hexadecimal value:%x",num);
	return 0;
}

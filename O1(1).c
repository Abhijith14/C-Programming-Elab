//Q. 2:

//IO 13(Input & Ouput )

//Write a program to read a character in upper case and then print it in lower case
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
int main() 
{
	char a;
  	scanf("%c",&a);
  	a=tolower(a);
  	printf("%c",a);
	return 0;
}

//Q. 84:

//Pointers - 30(Pointers )

//Write a program which takes an input from the user and then checks whether its a number or a character . If its a character ,determine whether it is in upper case or lower case
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
int main()
{
	char X,*p;
  	p=&X;
  	scanf("%c",p);
  	if(isalpha(*p))
    {
      if(isupper(*p))
      {
        printf("Input is upper case\n");
        printf("Lower case=%c",tolower(*p));
      }
      else
      {
        printf("Input is lower case\n");
        printf("Upper case=%c",toupper(*p));
      }
    }
  	return 0;
}

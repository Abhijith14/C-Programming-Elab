//Q. 83:

//Pointers - 48(Pointers )

//Write a program to reverse a string using pointer
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
#include <string.h>
int main()
{
	char Ar[30],*p;
    int l,i;
    scanf("%[^\n]%*c",Ar);
    l=strlen(Ar);
    p=&Ar[l-1];
	for(i=l-1;i>=0;i--)
    {
      printf("%c",*p);
      p--;
    }
	return 0;
}

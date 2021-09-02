//Q. 95:

//Pointers - 34(Practice Session )

//Write a function that accepts a string using pointers. In the function ,delete all the occurrences of a given character and display the modified string on the screen (Case Insensitive)
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
#include <string.h>
int main() 
{
	int i;
    char N[30],*p,f[2];
  	scanf("%s",N);
    scanf("%s",f);
  	p=&N[0];
  	for(i=0;i<strlen(N);i++)
    {
      if(*p!=f[0])
        printf("%c",*p);
      p++;
    }
	return 0;
}

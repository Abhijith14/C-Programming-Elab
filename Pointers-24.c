//Q. 90:

//Pointers - 24(Pointers )

//Write a function that accepts a string using pointers. In the function ,delete all the occurrences of a given character and display the modified string on the screen
//Input and Output Format:
//Refer sample input and output for formatting specification.
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
#include <string.h>
int main() 
{
	int i,f;
    char n,Ar[30],*p;
    scanf("%[^\n]%*c",Ar);
    scanf("%c",&n);
    p=&Ar[0];
    for(i=0;i<strlen(Ar);i++)
    {
        if(n==*p)
        {
          *p=*(p+1);
          f=1;
          n='0';
        }
        if(f==1)
          *p=*(p+1);
        p++;
    }
    printf("%s",Ar);
	return 0;
}

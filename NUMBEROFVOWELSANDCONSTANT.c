//Q. 86:

//NUMBER OF VOWELS AND CONSTANT(Pointers )

//Count vowels and constants in a given string using pointers
//


#include <stdio.h>
#include <string.h> 
int main() 
{
	char S[20],*p;
  	int l,i,c=0,v=0;
  	scanf("%s",S);
    l=strlen(S);
  	p=&S[0];
  	for(i=0;i<l;i++)
    {
      if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
        v++;
      else
        c++;
      p++;
    }
  	printf("%d %d",v,c);
	return 0;
}

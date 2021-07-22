//Q. 51:

//Word Index 3(String )

//Write a C program to search all occurrences of a word in given string using loop
//Array Index starts from 0
//


#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100],word[100],T[30];
  	int i,j=0,f,d,c=0;;
    scanf("%[^\n]%*c",str);
    scanf("%[^\n]%*c",word);
  for(j=0;j<strlen(str);j++)
  {
   for(i=j,c=0;c<strlen(word);i++,c++)
        T[c]=str[i];
  	if(strcmp(T,word)==0)
    {
      d=i-strlen(word);
      printf("%d\n",d);
    }
  } 
  return 0;
}

//Q. 56:

//Remove Index String 2(String )

//Write a C program to remove from last word in given string using loop.
//


#include <stdio.h>
#include <string.h>
int main() 
{
	 char str[30],word[30];
  	 int i,j,f=0;	
  	 scanf("%[^\n]%*c",str);
     scanf("%[^\n]%*c",word);
   	 for(i=0;i<strlen(str);i++)
     {
        f=1;
        for(j=0;j<strlen(word);j++)
        {
            if(str[i+j]!=word[j])
            {
                f=0;
                break;
            }
        }
     	if(f==1)
        {
          
            for(j=i;j<=strlen(str)-strlen(word);j++)
            {
                str[j]=str[j+strlen(word)];
            }
 	        break;
        }
    }
  	printf("%s",str);
	return 0;
}

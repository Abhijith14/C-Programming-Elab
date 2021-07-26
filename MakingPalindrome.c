//Q. 55:

//Making Palindrome(String )

//Chef likes strings a lot but he likes palindromic strings even more. Today he found an old string s in his garage. The string is so old that some of its characters have faded and are unidentifiable now. Faded characters in the string are represented by '.' whereas other characters are lower case Latin alphabets i.e ['a'-'z'].
//Chef being the palindrome lover decided to construct the lexicographically smallest palindrome by filling each of the faded character ('.') with a lower case Latin alphabet. Can you please help him completing the task?
//Input
//First and the only line of each case contains string s denoting the old string that chef has found in his garage.
//Output
//For each test case, print lexicographically smallest palindrome after filling each faded character - if it possible to construct one. Print -1 otherwise.
//


#include <stdio.h>
#include <string.h>
int isPal(char str[]) 
{ 
    int l=0; 
    int h=strlen(str)-1; 
    while(h>l) 
    { 
        if(str[l++]!=str[h--]) 
        { 
            return 0; 
        } 
    } 
    return 1; 
} 
int main() 
{
	char i,Ar[30];
  	int f;
    scanf("%s",Ar);
  	for(i=0;i<strlen(Ar);i++)
    {
      if(Ar[i]=='.')
      {
        if(strlen(Ar)%2==0)
            Ar[i]=Ar[i-1]+1;
        else
            Ar[i]=Ar[i-1]-1;
         f=isPal(Ar);
       	 if(f==1)
         	 printf("%s",Ar);
          
      }
    }
	return 0;
}

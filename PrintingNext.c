//Q. 53:

//Printing Next(String )

//Latha and Trisha are friends. They love to play with words. Ishu gives them a task to replace each characters in a string with its next letter. Can you help them to complete this task?
//


#include <stdio.h>
int main()
{
	char i,Ar[30];
  	scanf("%s",Ar);
  	for(i=0;Ar[i]!='\0';i++)
    {
      Ar[i]=Ar[i]+1;
    }
  	printf("%s",Ar);
	return 0;
}

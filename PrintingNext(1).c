//Q. 100:

//Printing Next(Practice Session )

//Latha and Trisha are friends. They love to play with words. Ishu gives them a task to replace each characters in a string with its next letter. Can you help them to complete this task?
//


#include <stdio.h>
#include <string.h>
int main() 
{
	char Ar[10],i;
    scanf("%s",Ar);
    for(i=0;i<strlen(Ar);i++)
    	printf("%c",++Ar[i]);
	return 0;
}

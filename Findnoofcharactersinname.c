//Q. 79:

//Find no of characters in name(Structures and Unions )

//Manoj arranged one event to find no of characters in his friends name, your idea is to give your friends name, for that
//manoj has to answer the no of characters present in it, with the help of sturcuture concept accomplish it.
//Input Method
//Name of different friends
//Output Method
//No of characters
//Mandatory:
//Use Structure Concepts
//


#include <stdio.h>
#include <string.h>
struct Friend
{
  char name[30];
};
int main()
{
	struct Friend F;
  	scanf("%s",F.name);
  	int l=strlen(F.name);
  	printf("%d",l);
	return 0;
}

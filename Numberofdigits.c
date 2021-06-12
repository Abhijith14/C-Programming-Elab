//Q. 12:

//Number of digits(Data types )

//C Program to Count number of digits in number without using mod operator
//


#include <stdio.h>
#include <string.h>
int main() 
{
	int num,l;
  	char n[10];
  	scanf("%d",&num);
  	sprintf(n,"%d",num);
  	l=strlen(n);
  	printf("Number of Digits:%d",l);
	return 0;
}

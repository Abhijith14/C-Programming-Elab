//Q. 4:

//Months(Input & Ouput )

//Write a program that accepts an integer as input and displays the corresponding month in words. [ January, February, March, April, May, June, July, August, September, October, November, December]. Use Switch statement.
//


#include <stdio.h>
int main() 
{
	int num;
    scanf("%d",&num);
  	switch(num)
    {
      case 1:
        	 printf("January");
        	 break;
      case 2:
        	 printf("February");
        	 break;
      case 3:
        	 printf("March");
        	 break;
	  case 4:
        	 printf("April");
        	 break;
	  case 5:
        	 printf("May");
        	 break;
	  case 6:
        	 printf("June");
        	 break;
	  case 7:
        	 printf("July");
        	 break;
	  case 8:
        	 printf("August");
        	 break;
	  case 9:
        	 printf("September");
        	 break;
	  case 10:
        	 printf("October");
        	 break;
	  case 11:
        	 printf("November");
        	 break;
	  case 12:
        	 printf("December");
        	 break;
    }
	return 0;
}

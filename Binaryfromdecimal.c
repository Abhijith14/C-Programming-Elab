//Q. 32:

//Binary from decimal(Control and Looping )

//Lydia learn number conversion concept in C. Her teacher gave a homework to convert the number from decimal to binary. Help her to convert the number from decimal to binary.
//Input should be from 0 to 127
//64 32 16 8 4 2 1
//


#include <stdio.h>
int binary_conversion(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num%2)+10*binary_conversion(num/2);
    }
}
int main() 
{
	int b;
  	scanf("%d",&b);
    printf("%07d",binary_conversion(b));
  	return 0;
}

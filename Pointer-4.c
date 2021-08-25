//Q. 87:

//Pointer - 4(Pointers )

//Write a program to convert floating point values into its integral equivalent using pointer
//Input and Output Format:
//All float values are displayed correct to 2 decimal places.
//All text in bold corresponds to input and the rest corresponds to output.
//Note: In the floating point value mantissa is more equal or more than 0.50 then add one to the equivalent integer value
//Refer sample input and output for formatting specification
//Note:
//If the decimal value is less than 0.50 then print the integer value and if the decimal value is above 0.50 or 0.50 then add one to the integer value.
//


#include <stdio.h>
int main() 
{
	float n,*p;
  	int T;
  	scanf("%f",&n);
  	p=&n;
  	T=n*10;
  	if(T%10<5)
  	   printf("%d",T/10);
  	else
       printf("%d",(T/10)+1);
	return 0;
}

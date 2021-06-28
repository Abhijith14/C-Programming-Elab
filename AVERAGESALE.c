//Q. 29:

//AVERAGE SALE(Operators )

//A grocer has a sale of Rs. s1, Rs. s2, Rs. s3, Rs. s4 and Rs. s5 for 5 consecutive months. How much sale must he have in the sixth month so that he gets an average sale of Rs. x?
//Write a C program to compute the sale in the 6th month.
//Input Format:
//Input consists of 5 integers and 1 float. The five integers correspond to s1, s2, s3, s4 and s5. The float input corresponds to x.
//Output Format:
//Refer sample input and output for formatting specifications.
//The float values are displayed correct to 2 decimal places
//


#include <stdio.h>
int main() 
{
	int S,s1,s2,s3,s4,s5;
    float avg,s6,sum;
    scanf("%d%d%d%d%d%f",&s1,&s2,&s3,&s4,&s5,&avg);
  	S=s1+s2+s3+s4+s5;
  	sum=avg*6;
  	s6=sum-S;
  	printf("The required sale in the sixth month is %.2f",s6);
	return 0;
}

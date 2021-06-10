//Q. 8:

//Fees Calculator(Input & Ouput )

//Write a program that displays the fees that a student needs to pay at the end of the semester. Use switch statement.
//Input Format:
//The first line of the input consists of a character from the set {A, B, C, D}. A corresponds to a day scholar student with the required attendance percentage. B corresponds to a day scholar student without the required attendance percentage. C corresponds to a hostel student with the required attendance percentage. D corresponds to a hostel student without the required attendance percentage.
//The second line of the input consists of an integer which corresponds to the number of regular papers for which the student is appearing in the examination.
//The third line of the input consists of an integer which corresponds to the fee to be paid per regular paper.
//The fourth line of the input consists of an integer which corresponds to the number of backup(arrear) papers for which the student is appearing in the examination.
//The fifth line of the input consists of an integer which corresponds to the fee to be paid per arrear paper.
//Output Format:
//The output consists of a single line. Refer to Sample output for format details.
//[ There is a condonation fee or Rs. 5000 for lack of attendance and the hostel students need to pay the last month mess bill of Rs.1500 along with the examination fee.]
//Mandatory:
//You should use Switch case to get 100% evaluation
//


#include <stdio.h>
int main()
{
	char s;
  	int p1,f1,p2,f2;
  	int f;
  	scanf("%c%d%d%d%d",&s,&p1,&f1,&p2,&f2);
  	switch(s)
    {
      case 'A':
    		   f=f1*p1;
      		   f=f+(f2*p2);
    		   break;
      case 'B':
    	       f=f1*p1;
     		   f=f+(f2*p2);
  		       f=f+5000;
   			    break;
      case 'C':
        	   f=f1*p1;
     		   f=f+(f2*p2);
  		       f=f+1500;
        		break;
      case 'D':
        	   f=f1*p1;
     		   f=f+(f2*p2);
  		       f=f+1500;
      		   f=f+5000;
        		break;
    }
  	printf("The fee to be paid is Rs=%d",f);
	return 0;
}

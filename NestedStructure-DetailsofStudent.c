//Q. 75:

//Nested Structure - Details of Student(Structures and Unions )

//Create two structures as follows:
//Structure 1:
//Name = student
//Data members = name(char), rollno(int)
//Structure 2:
//Name = dateOfBirth
//Data members = date(int), month(int), year(int)
//Create Structure Variable as "DOB"
//In main function:
//1. Create structure variable for student "std"
//Hint: struct student std;
//2. Input the values of name and roll number
//Hint: std.name
//3. Input the values of date, month and year
//Hint: std.DOB.date
//4. Display the name, roll number, Date of Birth.
//Note: The structure variables, data members and structure name are CASE Sensitive.
//Follow the same case mentioned in the mandatory
//


#include <stdio.h>
struct student
{
   char name[30];
  	int rollno;
};
struct dateOfBirth
{
	int date,month,year;
}DOB;
int main() 
{
	struct student std;
  	scanf("%s%d",std.name,&std.rollno);
  	scanf("%d%d%d",&DOB.date,&DOB.month,&DOB.year);
  	printf("Name=%s\nRollNo=%d\nDate of birth=%d/%d/%d",std.name,std.rollno,DOB.date,DOB.month,DOB.year);
	return 0;
}

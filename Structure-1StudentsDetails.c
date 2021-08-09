//Q. 71:

//Structure - 1 Students Details(Structures and Unions )

//Create a structure called Student.
//struct Student
//{
//char name[30];
//char department[20];
//int yearOfStudy;
//float cgpa;
//};
//The structure variable should be "S1"
//Write a program to get the details of n students and to display their details, sorted in ascending order based on name.
//Input and Output Format:
//Refer sample input and output for formatting specification.
//Name, Department, Year of study, CGPA.
//Students details are sorted based on their "Names" in ascending order
//Mandatory :
//Note: The structure variables, data members and structure name are CASE Sensitive.
//Follow the same case mentioned in the mandatory
//


#include <stdio.h>
#include <string.h>
struct Student
{
	char name[30];
	char department[20];
	int yearOfStudy;
	float cgpa;
};
int main() 
{
	struct Student S1[10],T;
  	int i,n,j;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
    {
     	scanf("%s",S1[i].name);
      	scanf("%s",S1[i].department);
      	scanf("%d",&S1[i].yearOfStudy);
      	scanf("%f",&S1[i].cgpa);
    }
  	for(i=0;i<n;i++)
  	{
      for(j=i+1;j<n;j++)
      {
      	if(strcmp(S1[i].name,S1[j].name)>0)
      	{
        	T=S1[i];
          	S1[i]=S1[j];
          	S1[j]=T;
        }
      }
    }
    for(i=0;i<n;i++)
    {
      printf("Name:%s\n",S1[i].name);
      printf("Department:%s\n",S1[i].department);
      printf("Year of study:%d\n",S1[i].yearOfStudy);
      printf("CGPA:%.1f\n",S1[i].cgpa);     
    }     
    return 0;
}

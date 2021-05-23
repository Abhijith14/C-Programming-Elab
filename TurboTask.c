//Q. 3:

//Turbo Task(Input & Ouput )

//A task is given to 3 persons to complete it within a particular time. If the person exceeds the time limit he will be disqualified. Only those who complete it within the given time limit is qualified. Among the qualified persons, the person who completes the task first will be rewarded.
//Write a program to find the person who is rewarded.
//Input Format:
//First input corresponds to the Time limit for the task in hours. Second,Third and Fourth Inputs correspond to the number of hours Taken by the first , second and third persons respectively to complete the task.
//Output Format:
//Display the person who Completes first.
//[All text in bold corresponds to input and the rest corresponds to output]
//


#include <stdio.h>
int main() 
{
	int T,a,b,c;
  	int fa,fb,fc;
  	scanf("%d",&T);
  	scanf("%d",&a);
  	scanf("%d",&b);
  	scanf("%d",&c);
  	if(a>T)
    {
      fa=1;
    }
    if(b>T)
    {
      fb=1;
    }
    if(c>T)
    {
      fc=1;
    }
  	if(fa==1&&fb==1&&fc==1)
    	printf("No person wins");
  	else
    {
      if(a<b)
      {
        if(a<c)
          printf("First person wins");
        else if(c<a)
          printf("Third person wins");
      }
      else if(b<a)
      {
        if(b<c)
          printf("Second person wins");
        else if(c<b)
          printf("Third person wins");
      }
    }
	return 0;
}

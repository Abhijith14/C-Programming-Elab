//Q. 35:

//TRACK THE NUMBER(Control and Looping )

//"Given a sorted array of integers. Let N be the number of test cases. Let n be the number of elements of the given array. Destiny value is provided. Check whether the target value is located on the given sorted array, if it is so then return the index of the array else identify the position where the target value needed to be inserted. Print the index of the identified target value else return the index value where the elements to be inserted.
//INPUT FORMAT: Get the sorted array containing elements and the target value
//OUTPUT FORMAT: Print the index value of the target element if it exists else return the position where the target element is needed to be inserted.
//EXPLANATION: Get the sorted array containing elements and the target value. Now check whether the given target values lies on the given array if it so return the index value else return the index value where the target value to be inserted."
//


#include <stdio.h>
int main() 
{
	int num,i,n,Ar[30];
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
       scanf("%d",&Ar[i]);
  	scanf("%d",&num);
  	for(i=0;i<n;i++)
    {
      if(Ar[i]==num)
      {
        printf("%d",i);
        break;
      }
	  else
      {
        if(Ar[i]>num)
        {
          printf("%d",i);
          break;
        }
      }
    }
	return 0;
}

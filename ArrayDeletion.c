//Q. 42:

//Array Deletion(Arrays )

//Write a program to delete an element from the array.
//Input and Output Format:
//Assume that the maximum number of elements in the array is 20.
//Refer sample input and output for formatting specifications.
//All text in bold corresponds to input and the rest corresponds to output.
//Input:
//1. The number of inputs to be entered by the user
//2. The array elements
//3. The array index to be deleted
//Example 1:
//Input 1:
//4
//11 12 13 14
//1
//Output 1:
//Array after deletion is
//11 13 14
//Explanation:
//Array Index starts from 0 the user entered array index as 1 so the number 12 is deleted.
//arr[0]=11
//arr[1]=12
//arr[2]=13
//arr[3]=13
//Deleted Element=12 a[1]
//


#include <stdio.h>
int main() 
{
	int i,l,Ar[20],del;
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
    	scanf("%d",&Ar[i]);
    scanf("%d",&del);
  	for(i=del;i<l;i++)
         Ar[i]=Ar[i+1];
    l--;
    printf("Array after deletion is\n");
    for(i=0;i<l;i++)
      printf("%d ",Ar[i]);
    return 0;
}

//Q. 70:

//Recursion 8 : Maximum Element in Array(Functions )

//Write a program to find the maximum element in an array using recursion.
//Input and Output Format:
//Input consists of n+1 integers.
//Refer sample input and output for formatting specifications.
//All text in bold corresponds to input and the rest corresponds to output.
//


#include <stdio.h>
int max(int num1,int num2)
{
    return (num1>num2)?num1:num2;
}
int findMaxRec(int A[],int n) 
{ 
    if (n==1) 
        return A[0]; 
    return max(A[n-1],findMaxRec(A, n-1)); 
} 
int main() 
{ 
    int i,Ar[10],n;// = sizeof(A)/sizeof(A[0]); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&Ar[i]);
    printf("Maximum element in the array is %d",findMaxRec(Ar,n)); 
    return 0; 
} 

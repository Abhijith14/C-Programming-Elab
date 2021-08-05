//Q. 67:

//Array Insertion using Function(Functions )

//Write a program to insert an element in the array
//Input 1: Size of the Array
//Input 2: The number of elements
//Input 3: The Place index where the elements needs to be inserted
//Inout 4: The Element to be inserted
//


#include <stdio.h>
void Array(int Ar[],int num,int ind,int l)
{
  int i;
  if(ind>l)
      printf("Sorry Invalid Location");
  else
  {
    for(i=l;i>=ind;i--)
   	  Ar[i]=Ar[i-1];
 	Ar[ind-1]=num;
  	l++; 
  	
    for(i=0;i<l;i++)
    	printf("%d\n",Ar[i]);
  }
}
int main() 
{
	int i,l,num,ind,Ar[30];
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
      scanf("%d",&Ar[i]);
  	scanf("%d",&ind);
  	scanf("%d",&num);
  	Array(Ar,num,ind,l);
	return 0;
}

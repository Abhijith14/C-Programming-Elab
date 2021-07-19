//Q. 48:

//Sort by Select(Arrays )

//There were group of friends standing in a straight line. But the class teacher asked them to stand in a ascending order. Can you write a program for this scenario using arrays
//


#include <stdio.h>
void bubbleSort(int Ar[],int n)  
{  
    int i,j,T;  
    for (i=0;i<n-1;i++)      
    {  
    	for(j=0;j<n-i-1;j++)  
        {
        	if(Ar[j]>Ar[j+1])  
            {
             	T=Ar[j];
              	Ar[j]=Ar[j+1];
              	Ar[j+1]=T;
            }
        }
    }
}  
int main()  
{  
    int i,Ar[30],n; 
    scanf("%d",&n);
  	for(i=0;i<n;i++)
      scanf("%d",&Ar[i]);
    bubbleSort(Ar,n);  
    for(i=0;i<n;i++)  
    	printf("%d ",Ar[i]);  
    return 0;  
}  

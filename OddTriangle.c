//Q. 25:

//Odd Triangle(Operators )

//"Given the triangle of consecutive odd numbers:
//1
//3 5
//7 9 11
//13 15 17 19
//21 23 25 27 29
//...
//Calculate the row sums of this triangle from the nth row index (starting at row index 1)."
//


#include <stdio.h>
int main() 
{
	int i,j,A[30][30],s=0,n,k=1;
    scanf("%d",&n);
    for(i=1;i<30;i++)
    {
     	for(j=1;j<=i;j++)
        {
     		A[i][j]=k;
            k+=2;
        }
    }
    for(i=n;i<=n;i++)
    {
     	for(j=1;j<=i;j++)
        {
     		s+=A[i][j];
        }
    }
    printf("%d",s);
    return 0;
}

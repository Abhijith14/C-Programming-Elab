//Q. 91:

//LOWER TRIANGULAR MATRIX(Practice Session )

//A lower triangular matrix is a square matrix in which all the elements above the diagonal are zero.
//That is, all the non-zero elements are in the lower triangle:
//Write a C program to find whether a given matrix is a lower triangular matrix or not.
//Input Format:
//The input consists of (n*n+1) integers. The first integer corresponds to the number of rows/columns in the matrix. The remaining integers correspond to the elements in the matrix. The elements are read in rowwise order, first row first, then second row and so on. Assume that the maximum value of m and n is 5.
//Output Format:
//Print yes if it is a lower triangular matrix . Print no if it is not a lower triangular matrix.
//


#include <stdio.h>
int main() 
{
	int f=0,r,c,i,j;
  	int Ar[10][10];
  	scanf("%d%d",&r,&c);
  	for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      	scanf("%d",&Ar[i][j]);
    }
    for(i=0;i<r;i++)
    {
      for(j=i+1;j<c;j++)
      {
        if(Ar[i][j]==0)
          f=1;
        else
        {
          f=0;
          break;
        }
      }
      if(f==0)
        break;
    }
  	if(f==1)
  		printf("yes");
  	else if(f==0)
      	printf("no");
	return 0;
}

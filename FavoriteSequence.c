//Q. 18:

//Favorite Sequence(Data types )

//Lancy has a sequence of N numbers. He like a sequence better if the sequence contains his favorite sequence as a substring.
//Given the sequence and his favorite sequence(F) check whether the favorite sequence is contained in the sequence
//Input
//The first line will contain the number of test cases and are followed by the cases.
//Each test case consists of four lines: The length of the sequence, the sequence N,the length of F and the sequence F
//Output
//Print "Yes" if the sequence contains the favourite sequence int it otherwise print "No"
//Constraints
//1<=T<=10
//


#include <stdio.h>
int main() 
{
	int i,j,k,c=0,T,n1,n2,N[30],F[30];
  	scanf("%d",&T);
  	for(i=0;i<T;i++)
    {
      scanf("%d",&n1);
      for(j=0;j<n1;j++)
		scanf("%d",&N[j]);
      scanf("%d",&n2);
      for(j=0;j<n2;j++)
        scanf("%d",&F[j]);
      
      for(j=0;j<n2;j++)
      {
        for(k=0;k<n1;k++)
        {
       		if(F[j]==N[k])
            {
              c++;
              break;
            }
        }
      }
      if(c==n2)
        printf("Yes\n");
      else
        printf("No\n");
    }
	return 0;
}

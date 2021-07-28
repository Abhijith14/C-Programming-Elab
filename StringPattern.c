//Q. 57:

//String Pattern(String )

//Given a string
//char str[ ] =123456789;
//Write a program that displays the following:
//1
//2 3 2
//3 4 5 4 3
//4 5 6 7 6 5 4
//5 6 7 8 9 8 7 6 5
//


#include <stdio.h>
int main() 
{
	int i,j,n,l,k;
  	char str[]={"123456789"};
  	scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
      for(j=0,l=i;j<=i;j++,l++)
      {
        printf("%c ",str[l]); 
      }
      l=l-2; 
      for(k=0;k<i;k++,l--) 
        printf("%c ",str[l]);
      printf("\n");
    }
    
	return 0;
}

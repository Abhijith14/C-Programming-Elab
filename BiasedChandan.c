//Q. 39:

//Biased Chandan(Control and Looping )

//Chandan is an extremely biased person, and he dislikes people who fail to solve all the problems in the interview he takes for hiring people. There are n people on a day who came to be interviewed by Chandan. Chandan rates every candidate from 0 to 10. He has to output the total ratings of all the people who came in a day. But, heres the problem: Chandan gets extremely frustrated when someone ends up scoring a 0 in the interview. So in frustration he ends up removing the candidate who scored that 0, and also removes the candidate who came before him. If there is no candidate before the one who scores a 0, he does nothing.Youve to find the summation of all the ratings in a day for Chandan.
//Input constraints:
//The first line of input will contain an integer n. The next n lines will contain an integer, where the ith integer represents the rating of the ith person.
//Output constraints:
//Print the required sum.
//Constraints:
//1 <= n <= 5 * 103
//0 <= Value of ratings <=10
//


#include <stdio.h>
int main() 
{
	int l,i,Ar[30],s=0;
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
      scanf("%d",&Ar[i]);
  	for(i=0;i<l;i++)
    {
		if(Ar[i]==0)
          Ar[i-1]=0;
    }
  	for(i=0;i<l;i++)
    {
      s=s+Ar[i];
    }
    printf("%d",s);  
	return 0;
}

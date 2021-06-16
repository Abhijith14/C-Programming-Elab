//Q. 17:

//Your Name is Mine(Data types )

//In an attempt to control the rise in population, Archer was asked to come up with a plan. This time he is targeting marriages. Archer, being as intelligent as he is, came up with the following plan:
//A man with name M is allowed to marry a woman with name W, only if M is a subsequence of W or W is a subsequence of M.
//A is said to be a subsequence of B, if A can be obtained by deleting some elements of B without changing the order of the remaining elements.
//Your task is to determine whether a couple is allowed to marry or not, according to Archers rule.
//Input
//The first line contains an integer T, the number of test cases. T test cases follow. Each test case contains two space separated strings M and W.
//Output
//For each test case print ""YES"" if they are allowed to marry, else print ""NO"". (quotes are meant for clarity, please dont print them)
//Constraints
//1 <= T<=100
//1<= |M|, |W| <=25000 (|A| denotes the length of the string A.)
//All names consist of lowercase English letters only.
//


#include <stdio.h>
int subsequence(char M[],char W[])
{
     int i,j;
     j=0;
     for(i=0;W[i]!='\0';i++)
     {
         if(M[j]==W[i])
         {
           j++;
           if(M[j]=='\0')
                return 1;
         }
     }
     return 0;
}
int main()
{
  int T,flag1,flag2;
  char M[25001],W[25001];
  scanf("%d",&T);
  while(T--)
  {
      scanf("%s %s",M,W);
      flag1=subsequence(M,W);
      flag2=subsequence(W,M);
      if(flag1||flag2)
         printf("YES\n");
      else
         printf("NO\n");
  }	
  return 0;
}

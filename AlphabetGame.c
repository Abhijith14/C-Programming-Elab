//Q. 62:

//Alphabet Game(Functions )

//Not everyone probably knows that Chef has younder brother Jeff. Currently Jeff learns to read.
//He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.
//Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!
//Input
//The first line of the input contains a lowercase Latin letter string S, consisting of the letters Jeff can read. Every letter will appear in S no more than once.
//The second line of the input contains an integer N denoting the number of words in the book.
//Each of the following N lines contains a single lowecase Latin letter string Wi, denoting the ith word in the book.
//Output
//For each of the words, output "Yes" (without quotes) in case Jeff can read it, and "No" (without quotes) otherwise.
//Constraints
//1 <= |S| <= 26
//1 <= N <= 1000
//1 <= |Wi| <= 12
//Each letter will appear in S no more than once.
//S, Wi consist only of lowercase Latin letters.
//Subtasks
//Subtask #1 (31 point): |S| = 1, i.e. Jeff knows only one letter.
//Subtask #2 (69 point) : no additional constraints
//


#include <stdio.h>
void Alpha(char A[],int n)
{
  int i,j,k,f;
  char B[30];
  for(i=0;i<n;i++)
    {
      f=0;
      scanf("%s",B);
      for(j=0;B[j]!='\0';j++)
      {
         for(k=0;A[k]!='\0';k++)
         {
           if(A[k]==B[j])
           {
             f=1;
             break;
           }
           else
             f=0;
         }
         if(f==0)
           break;
      }
    if(f==1)
      printf("Yes\n");
    else
      printf("No\n");
    }
}
int main()
{
	int n;
  	char A[30];
  	scanf("%s",A);
	scanf("%d",&n);
  	Alpha(A,n);
	return 0;
}

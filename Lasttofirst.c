//Q. 93:

//Last to first(Practice Session )

//Kanna is a mischievious boy. He always used to keep things in reverse order. One fine morning Kanna chat with his uncle. His uncle gave him set of numbers and he ask him to place numbers in reverse order. Can you help him to come out of this problem?
//


#include <stdio.h>
int main()
{
	int n,Ar[10],i;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
    	scanf("%d",&Ar[i]);
  	for(i=n-1;i>=0;i--)
       printf("%d ",Ar[i]);
	return 0;
}

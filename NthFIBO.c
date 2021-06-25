//Q. 26:

//Nth FIBO(Operators )

//John played with jacob.John wanted to test how soon jacob will answer for his question.He told him one number.The job of john is to add the numbers 0 and 1 initially and to add that output with 1.Now Jacob gets another output.jacob has to add this current output with previous output .This action has to be repeated upto certain times.After this Jacob needs to write those outputs as a series starts from 0,1 and to find out the n th number of that series what john told.Write a code for this.
//


#include <stdio.h>
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return(fibo(num-1)+fibo(num-2));
    }
}
int main()
{
	int n;
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}

//Q. 59:

//Sereja and Two Strings 2(String )

//Sereja has a string A consisting of n lower case English letters.
//Sereja calls two strings X and Y each of length n similar if they can be made equal by applying the following operation at most once in each of them.
//Chose any two position i, j in the string (i can be equal to j too). Swap the characters at position i with character at position j.
//For example strings "abcd" and "acbd" are similar, strings "ab" and "ab" are similar, but strings "abcde" and "bcdea" are not similar. Note that strings "abc" and "cab" are also similar, as you can swap a and c in the first string to get "cba" and a and b in the second string to get "cba".
//Now Sereja is interested in finding number of ordered pairs of non similar strings X and Y such that they can be constructed from a given string A by permutation of its characters. As answer could be large, please output your answer modulo (109 + 7).
//Note
//A string s (of size n) is said to be constructed from string t (also of size n) by permutation of its characters if there exists a permutation P (of length n), such that s[i] = t[P[i]] for each i from 1 to n.
//Input
//First line contain integer T - number of test cases.
//For each of the next T lines:
//Each line contains a string A as defined in the problem.
//Output
//For each test case, output answer modulo 1000000007 (109 + 7) in separate line.
//Constraints
//1<= T <= 10
//1 <= n <= 10^5
//Constraints
//Subtask #1: 1<= n <= 10 (25 points)
//Subtask #2: 1 <= n <= 100 (25 points)
//Subtask #3: 1 <= n <= 1000 (25 points)
//Subtask #4: original constraints (25 points)
//


#include <stdio.h>
#include <string.h>
long f[100009];
long power(long long a,long long b)
{
    long int ans=1;
    a=a%1000000007;
    while(b!=0)
    {
        if(b%2==1)
          ans=(ans*a)%1000000007;
        a=(a*a)%1000000007;
        b=b/2;
    }
    return ans;
}
long cal(long long n,long long r)
{
    long ans;
    ans=f[n];
    if(n<r)
      return 0;
    ans = ((ans*power(f[r],1000000007-2))%1000000007);
    ans=((ans*power(f[n-r],1000000007-2))%1000000007);
    ans = (ans%1000000007+1000000007)%1000000007;
    return (ans+1000000007)%1000000007;
}
long calsingle(int *a,int length)
{
    long ans;
    int i;
    ans=cal(length,2);
    for(i=0;i<26;i++)
        ans = ans- cal(a[i],2);
    return ans;
}
long caldouble(int *a)
{
    long ans=0,r1,r2,r3,r4;
    int i,j,k,l;
    for(i=0;i<26;i++)
    {
        r1=a[i];
        for(j=i+1;j<26;j++)
        {
            r2=a[j];
            ans = (ans+ cal(r1,2)*cal(r2,2))%1000000007;
            for(k=j+1;k<26;k++)
            {
                r3=a[k];
                ans =(ans+r1*r2*r3*(r1+r2+r3-1))%1000000007;
                for(l=k+1;l<26;l++)
                {
                   r4=a[l];
                   ans=(ans+r1*r2*r3*r4*3)%1000000007;
                }
            }
        }
    }
    ans=(ans+1)%1000000007;
    return ans;
}
long total(int *a,int length)
{
    int i;
    long ans;
    ans=f[length];
    for(i=0;i<26;i++)
    {
      if(a[i]>1)
        ans=(ans*power(f[a[i]],1000000007-2))%1000000007;
    }
    return ans%1000000007;
}
void pre()
{
    int i;
    f[0]=1;
    for(i=1;i<100006;i++)
       f[i]=(i*f[i-1])%1000000007;
}
int main() 
{
	int t;
    long tot,s,d,ms,ans;
    pre();
    scanf("%d",&t);
    while(t--)
    {
        char str[100005];
        int i,a[26];
        for(i=0;i<26;i++)
          a[i]=0;
        scanf("%s",str);
        int length=strlen(str);
        for(i=0;str[i]!='\0';i++)
          a[str[i]-'a']++;
        tot=total(a,length);
        s = calsingle(a,length);
        d = caldouble(a);
        ms= ((tot-s-d)%1000000007+1000000007)%1000000007;
        ans = (ms*tot)%1000000007;
        printf("%ld\n",ans);
    }
	return 0;
}

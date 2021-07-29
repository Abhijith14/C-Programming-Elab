//Q. 58:

//LAPINDROME(String )

//Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
//Your task is simple. Given a string, you need to tell if it is a lapindrome.
//Input:
//First line of input contains a single integer T, the number of test cases.
//Each test is a single line containing a string S composed of only lowercase English alphabet.
//Output:
//For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
//Constraints:
//1 <= T <= 100
//2 <= |S| <= 1000, where |S| denotes the length of S
//


#include <stdio.h>
#include <string.h>
int Lap(char s[], int len)
{
  int freq[26]={0},i;
  for(i=0;i<len/2;i++)
    freq[s[i]-'a']++;
  for(i=len/2+(len%2!=0);i<len;i++)
	freq[s[i]-'a']--;
  for(i=0;i<26;i++)
  {
    if(freq[i]!=0)
		return 0;
  }
	return 1;
}
int main() 
{
	int i,T;
    char S[30];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
      scanf("%s",S);
      if(Lap(S,strlen(S))==1)
        printf("YES\n");
      else
        printf("NO\n");
    }
	return 0;
}

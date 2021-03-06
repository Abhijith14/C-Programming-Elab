//Q. 89:

//Prime words(Pointers )

//In the magic land of Mathtopia, the words of the language are written only using two symbols: ones and zeros.
//A given word w is called "prime" if it cannot be written in the form of the concatenation of several copies of some shorter word. So, for example the words 100, 1100, and 001100 are prime, while the words 0101, 100100, 1111, and 101010 are not prime.
//Your task is to calculate the number of prime words which can be built from exactly a ones and b zeros.
//Input
//t - the number of test cases. For each test case, two integers: 1<=a<=109, 1<=b<=109.
//Output
//For each test case, output the required answer modulo 531169.
//Explanation: the 4 words from the example are: '0011','1100','0110','1001'.
//


#include <stdio.h>
 
#define PR 531169
 
int fakt[PR];
int inverz[PR];
 
int inv(int x)
{
	int y=PR;
	int p0=1,p1=0,t,p2;
	while(y)
	{
		p2=p0-x/y*p1;
		p0=p1;
		p1=p2;
		t=y;
		y=x%y;
		x=t;	
	}
 
	p0%=PR;
	if (p0<0)
		return p0+PR;
	return p0;
}
 
 
void racunajfakt()
{
	int i;
	long long temp=1;
	fakt[0]=1;
	inverz[0]=1;
	for(i=1;i<PR;i++)
	{
		temp=(temp*i)%PR;
		fakt[i]=temp;
		inverz[i]=inv(temp);
	}
}
 
int ost(int x, int y)
{
	long long temp;
	if ((x+y)/PR>x/PR+y/PR)
		return 0;
	temp=fakt[(x+y)%PR];
	temp=temp*fakt[(x+y)/PR]%PR;
	temp=temp*inverz[x%PR]%PR;
	temp=temp*inverz[y%PR]%PR;
	temp=temp*inverz[x/PR]%PR;
	temp=temp*inverz[y/PR]%PR;
 
	return temp;
}
 
 
int gcd(int a, int b)
{
	int c;
	while (b)
	{
		c=b;
		b=a%b;
		a=c;
	}
	return a;	
}
 
 
char x[32000];
int prosti[5000];
int koliko;
 
 
int elem[10];
int brElem;
 
int a,b;
 
int ukupno;
 
void rek(int zadnji, int mu, int prod)
{
	int i;
	ukupno+=mu*ost(a/prod,b/prod);
	
	for(i=zadnji;i<brElem;i++)
		rek(i+1,-mu,prod*elem[i]);
}
 
 
int main()
{
	int t;
	int i,j,temp;
	
	for(i=2;i*i<31622;i++)
		if (!x[i])
			for(j=i*i;j<31622;j+=i)
				x[j]=1;
	
	for(i=2;i<31622;i++)
		if (!x[i])
			prosti[koliko++]=i;
 
	racunajfakt();
 
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d %d", &a, &b);
 
		temp=gcd(a,b);
		brElem=0;
		for(i=0;prosti[i]*prosti[i]<=temp;i++)
			if (temp%prosti[i]==0)
			{
				elem[brElem++]=prosti[i];
				while (temp%prosti[i]==0)	
					temp/=prosti[i];
			}
		if (temp>1)
			elem[brElem++]=temp;
			
		ukupno=0;
		rek(0,1,1);
		ukupno%=PR;
		if (ukupno<0)
			ukupno+=PR;
		printf("%d\n",ukupno);
	}
		
} 

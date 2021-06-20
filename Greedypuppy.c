//Q. 21:

//Greedy puppy(Operators )

//Tuzik is a little dog. But despite the fact he is still a puppy he already knows about the pretty things that coins are. He knows that for every coin he can get very tasty bone from his master. He believes that some day he will find a treasure and have loads of bones.
//And finally he found something interesting. A wooden chest containing N coins! But as you should remember, Tuzik is just a little dog, and so he cant open it by himself. Actually, the only thing he can really do is barking. He can use his barking to attract nearby people and seek their help. He can set the loudness of his barking very precisely, and therefore you can assume that he can choose to call any number of people, from a minimum of 1, to a maximum of K.
//When people come and open the chest they divide all the coins between them in such a way that everyone will get the same amount of coins and this amount is maximal possible. If some coins are not used they will leave it on the ground and Tuzik will take them after they go away. Since Tuzik is clearly not a fool, he understands that his profit depends on the number of people he will call. While Tuzik works on his barking, you have to find the maximum possible number of coins he can get.
//Input
//The first line of the input contains an integer T denoting the number of test cases. Each of next T lines contains 2 space-separated integers: N and K, for this test case.
//Output
//For each test case output one integer - the maximum possible number of coins Tuzik can get.
//Constraints
//1<=T<=50
//1<=N, K<=105
//In the first example he should call two people. Each of them will take 2 coins and they will leave 1 coin for Tuzik.
//In the second example he should call 3 people
//EXPLANATION :
//As the size of the inputs in the problem is very small ( in the order of 10^2 ) , we can simply use brute-forcing ( Brute Forcing ) and test every possible case and print the value of the maximum coins that the dog gets.
//As the dog only gets what remains after equal spitting , this can be calculated by using the modulo " % " ( Modulo ) operation .
//Example :
//For 2nd test case : ( 11,3 ) :
//He can call maximum of 3 people
//If he calls only 1 person , the person will take all the coins , leaving him with nothing
//If he calls 2 people , he will be left with only 1 coin , as the two people take 5 , 5 coins each.
//If he calls 3 people , each one will take 3 coins , leaving him with 2 coins
//So the best case for him is to call 3 people so he can get 2 coins.
//The input format is :
//An integer , to represent the number of test cases ( number of times the user will provide distinct values of N and K)
//Pair of integers representing N and K values respectively ( this will be the input format for next t cases )
//The result will be biggest modulo value that a number gives with N , such that the number is less than K.
//


#include <stdio.h>
int main() 
{
	int i,T,N,K;
  	scanf("%d",&T);
  	for(i=0;i<T;i++)
    {
  		scanf("%d%d",&N,&K);
      	printf("%d\n",N%K);
    }
	return 0;
}

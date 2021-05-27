//Q. 7:

//Miney Mouse(Input & Ouput )

//Mickey and Miney are two friends. Goofy was one of the Mickey's enemy.He was jealous of Mickey because Mickey was liked by everyone. One day Mickey and Miney went on to a trip. Goofy planned to kidnap Miney. He kidnapped Miney and kept her in one of the hot balloons tied up to a height. There were 50 hot balloons numbered from one. Each balloon will fly to a certain height. Only the numbers having 4 and 8 as its factors can fly upto the height of the Miney's balloon. Mickey was confused and he didn't know which numbered balloon can fly to Miney.
//So write a program to help the Mickey in finding the balloon.
//Input format:
//Inputs consists of a single integer which corresponds to number printed on the balloon. Assume that the input value is between 1 and 50.
//Output Format:
//Display whether the given Balloon will fly to Miney or Not.
//[All text in bold corresponds to input and the rest corresponds to output]
//


#include <stdio.h>
int main() 
{
	int n;
  	scanf("%d",&n);
    if(n%4==0&&n%8==0)
      printf("This balloon can fly to miney");
  	else
      printf("This balloon cannot fly to miney");
  	return 0;
}

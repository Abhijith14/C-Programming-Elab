//Q. 92:

//Adding two distances(Practice Session )

//1. Create a Structure called "Distance"
//2. Create two data members of "Distance Structure" feet(int), inch(float)
//3. Create three structure variables as d1, d2 and sumOfDistances 4. Get two distances and add the feet and inches.
//Mandatory:
//To add the distance using the structure variables as follows
//1. sumOfDistances.feet=d1.feet+d2.feet
//2 sumOfDistances.inch=d1.inch+d2.inch
//


#include <stdio.h>
struct Distance
{
  int feet;
  float inch; 
};
int main() 
{
	struct Distance d1,d2,sumOfDistances;
  	scanf("%d%f",&d1.feet,&d1.inch);
  	scanf("%d%f",&d2.feet,&d2.inch);
  	sumOfDistances.feet=d1.feet+d2.feet;
    sumOfDistances.inch=d1.inch+d2.inch;
  	printf("Sum of distances=%d feet and %.2f inches",sumOfDistances.feet,sumOfDistances.inch);
	return 0;
}

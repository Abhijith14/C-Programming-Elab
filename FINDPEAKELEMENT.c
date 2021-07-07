//Q. 38:

//FIND PEAK ELEMENT(Control and Looping )

//Take an input array.The array consists of list of numbers, where num[i] is not equal to num[i+1].The mission is to print the peak element and also print its index value.INPUT FORMAT: Get an input array with a list of numbers. OUTPUT FORMAT:Print the peak element (largest element) with its index value. EXPLANATION: Get an input array which must contain a series of numbers. And now,the doer has to find out the peak element in that array. So, finally print the peak element (largest element in the array).Along with its index number as shown in the format.
//


#include <stdio.h>
// Recursive function to find peak in the array
int findPeakElement(int A[], int low, int high, int n)
{
	// find mid element
	int mid = (low + high) / 2;
	// check if mid element is greater than its neighbors
	if ((mid == 0 || A[mid - 1] <= A[mid]) &&
		(mid == n - 1 || A[mid + 1] <= A[mid]))
		return mid;
	// If the left neighbor of mid is greater than the mid element,
	// then find the peak recursively in the left sub-array
	if (mid - 1 >= 0 && A[mid - 1] > A[mid])
		return findPeakElement(A, low, mid - 1, n);
	// If the right neighbor of mid is greater than the mid element,
	// then find the peak recursively in the right sub-array
	return findPeakElement(A, mid + 1, high, n);
}
// main function
int main(void)
{
	int A[10],l,i;
    scanf("%d",&l); 	
  	for(i=0;i<l;i++)
      scanf("%d",&A[i]);
    int index = findPeakElement(A,0,l-1,l);
    printf("Peak Element=%d\n",A[index]);
    printf("Index Value=%d",index); 
	//printf("The peak element is %d AND %d",A[index],index);
	return 0;
}

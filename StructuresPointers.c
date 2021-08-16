//Q. 78:

//Structures Pointers(Structures and Unions )

//1. Create a Structure "grocery" with following data members:
//a. qty - int
//b. price - float
//c. amount - float
//d. itemname - char
//2. In main method declare structure variable as "itm"
//Hint: struct grocery itm
//3. Create an another structure pointer variable
//Hint: struct grocery *pitem
//4. Assign the pointer assignment of itm to pitem
//Hint: pitem=&itm;
//5. Input the values of product name, price, quantity
//Hint: pitm->itemname
//6. Calculate the total amount as:
//pitem->amount =(float)pitem->qty * pitem->price;
//7. Display the details of itemname, price, quantity and totalamount
//Note: The structure variables, data members and structure name are CASE Sensitive.
//Follow the same case mentioned in the mandatory
//


#include <stdio.h>
struct grocery
{
 	int qty;
  	float price,amount;
  	char itemname[10];
};
int main() 
{
	struct grocery itm,*pitem;
  	pitem=&itm;
  	scanf("%s%f%d",pitem->itemname,&pitem->price,&pitem->qty);
  	pitem->amount =(float)pitem->qty * pitem->price;
	printf("Name=%s\nPrice=%f\nQuantity=%d\nTotal Amount=%.2f",pitem->itemname,pitem->price,pitem->qty,pitem->amount);
	return 0;
}

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int main () {
	
	int sum3=0;
	int sum5=0;
	int sum15=0;
	int SUM=0;

	
	for  (int i=0; i<1000; i++)
	{
	    if( i % 3 == 0)
		sum3 += i;  // We found the sum of all the multiples of 3 .
		if( i % 5 == 0)
		sum5 += i; // We found the sum of all the multiples of 5 .
		if( i % 15 == 0)
		sum15 += i; // We found the sum of all common multiples like 15,30..
	}
	
	SUM = (sum3 + sum5) - sum15; // sum15 has been calculated twice. That's why we have to subtract one sum15 .
	printf("The sum of all the multiples of 3 or 5 below 1000 %d ", SUM);
	
	return 0 ;
  
  }

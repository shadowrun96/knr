/* Exercise 2-1. Write a program to determine the ranges of char, short, int and long variables */
/*		 both signed and unsigned, by printing the appropriate values from standard     */
/* 		 headers and by direct computation. Harder if you compute them: determine the   */
/* 		 ranges of the various floating-point types.					*/
#include <stdio.h>
#include <limits.h>

int main() {


	printf("Minimum and maximum values a `signed char' can hold: %d,%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("Maximum values an `unsigned char' can hold: %d\n",UCHAR_MAX); 

	printf("Minimum and maximum values a `signed short int' can hold:%d,%d\n",SHRT_MIN, SHRT_MAX);
	printf("Maximum values an `unsigned short int' can hold:%d\n",USHRT_MAX);


	printf("Minimum and maximum values a `signed int' can hold:%d,%d\n",INT_MIN,INT_MAX);
	printf("Maximum values an `unsigned int' can hold:%d\n",UINT_MAX);

	printf("Minimum and maximum values a `signed long int' can hold:%ld,%ld\n",LONG_MIN, LONG_MAX);
	printf("Maximum value an `unsigned long int' can hold:%lu\n", ULONG_MAX);

	}


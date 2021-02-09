/* Exercise 1-4. Write a program to print the corresponding	*/
/* Celsius to Fahreneit table.					*/

#include <stdio.h>
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 	
	upper = 300;	
	step = 20;	

	fahr = lower;

	printf("Celsius\t\tFahreneit\n");
	while (celsius <= upper) {
		fahr = ((5.0/9.0) * celsius) + 32;
		printf( "%3.0f\t\t%6.1f\n", celsius,fahr);
		celsius = celsius + step;
	}
}


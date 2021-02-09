/* Exercise 1-15. Rewrite the temperature conversion program of */
/* Section 1.2 to use a function for conversion.		*/

#include <stdio.h>

float to_celsius(float);
float to_fahr(float);

main()
{
	float fahr, celsius;

	printf("%6.1f\n",to_fahr(32.0));
	printf("%3.0f\n",to_celsius(0));


	
}


	float to_celsius(float fahr_temp) {

		float celsius_temp = 0;
		celsius_temp = (5.0/9.0) * (fahr_temp-32.0);
		return celsius_temp;
	}

	float to_fahr(float celsius_temp) {

		float fahr_temp = ((5.0/9.0) * celsius_temp) + 32; 
		return fahr_temp;
	}


/* Exercise 1-9. Write a program to copy its input to its output,  */
/* replacing each string of one or more blanks by a single blank.  */


#include <stdio.h>

main() 
{
	int c;
	int flagspc; 

	c = 0;
	flagspc = 0;
	while ( (c = getchar() ) != EOF) {

		if (c != ' ') {
			flagspc = 0;
			putchar(c);
		}

		if (c == ' ' && flagspc == 1) 
			;


		if (c == ' ' && flagspc == 0) { 
			putchar(c);
			flagspc = 1;

		}

	}


}



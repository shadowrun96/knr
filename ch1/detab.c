/* 1.20: Write a program detab that replaces tabs in the input with the proper number of blanks
 * 	 to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
 * 	 Should n be a variable or a symbolic parameter?
 */


#include <stdio.h>
#define	TABSTOP	8

int main() 
{

	char c;
	int pos = 1;  
	
	while ( (c = getchar()) != EOF) {

		if (c > 31 && c < 127) {
			pos = pos + 1;
			printf("%c",c);
		}

		if (c == '\t') {
			pos = pos - 1;
			for (int spc = 0 ; spc < TABSTOP-pos; spc++) {
				printf(" ");
			}
			pos = 1;
		}
		if (c == '\n') {
			printf("\n");
			pos = 1;

		}

	}

/* end of main() */


}




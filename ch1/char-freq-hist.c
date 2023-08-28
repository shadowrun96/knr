/* Exercise 1-14. Write a program to print the histogram of the frequencies of the */
/* different characters in its input.						   */

/* Note: Prints only for 32 to 126. */

#include <stdio.h>

main()
{
	int c;
	int charfreq[126];  /* printable ASCII codes [32..126] */
	int cidx;

	c = cidx = 0;
	for (int i = 32; i < 126; i++) /* [0..31] is unused. */
		charfreq[i] = 0;

	while ((c = getchar()) != EOF) {

		charfreq[c] = charfreq[c] + 1; /* c is the ASCII code used as array index */
	}


	for (int i = 32; i < 126;i++) {

		printf("%c:", i);

		for (int j = 0; j < charfreq[i]; j++) {
			printf("*");
		}

		printf("\n");
	}
}


			



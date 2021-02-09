/* Exercise 1-13. Write a program to print a histogram of the lengths */
/* of words in its input. It is easy to draw the histogram with the   */
/* bars horizontal; a vertical orientation is more challenging        */


#include <stdio.h>

#define	MAX_WORD_LEN	23


main()
{
	int c;

	int word_len;
	c = word_len =  0;

	int freq[MAX_WORD_LEN]; 
	
/* initialize frequency table */

	for (int i = 0; i < MAX_WORD_LEN; ++i) 
		freq[i] = 0;


/* read words */
	while ((c = getchar()) != EOF) {
		
		if (c == ' ' || c == '\t' || c == '\n') {
			freq[word_len] = freq[word_len] + 1;
      			word_len = 0;
		} 
  		  
		else   ++word_len;
		

		}


/* print histogram */


	for (int i = 0; i < MAX_WORD_LEN; i++) {

		printf("%d:",i);
	  for (int j = 0; j < freq[i];j++) {

		printf("*");

		}
	
		printf("\n");
	}


}

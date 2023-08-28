/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */

#include <stdio.h>

main() 
{
	int c;

	int spaces;
	int tabs;
	int newlines;

	spaces = 0;
	tabs = 0;
	newlines = 0;
	while ( (c = getchar() ) != EOF) {

		if (c == '\n')
			++newlines;
		if (c == '\t')
			++tabs;
		if (c == ' ')
			++spaces;
	}

	printf("spaces:%d, tabs:%d, newlines:%d\n",spaces,tabs,newlines);
}


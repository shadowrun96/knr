/* Exercise 1-18. Write a program to remove trailing blanks and tabs */
/* from each line of input, and to delete entirely blank lines.      */

#include <stdio.h>
#define MAXLINE 1000 

int get_line(char line[], int maxline);

int main()
{
	int len;	
	char line[MAXLINE];	
	char stripped_line[MAXLINE];
	int trlblnk = 0;

	/* init char arrays with 0 */

	for (int s = 0; s < MAXLINE; s++) {
		line[s] = '\0';
		stripped_line[s] = '\0';
	}

	/* 1. Read from the end. */
	/* 2. If you encounter a space or a tab then increment the trlblnk counter */
	/* 3. If you encounter a character other than space or \t, then you break  */
	/*    from the loop, since there aren't any trailing blank characters left */
 	
	while ((len = get_line(line, MAXLINE)) > 0) {

		for (int i = len; i >=0; i--) {
			if (line[i] == ' ' || line[i] == '\t') {
				trlblnk = trlblnk + 1; 
			}
			else if (line[i] > 32) {
				break;
			}
		}

	
	/*  Read from the beginning, till the start of the trailing blanks and print. */

		for (int k = 0; k < len-(trlblnk+1); k++) {
			printf("%c",line[k]);
		}
	}

}

int get_line(char s[], int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}



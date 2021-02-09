/* Exercise 1-19. Write a function reverse(s) that reverses the */
/* character string s. Use it to write a program that reverses  */
/* its input a line at a time.				        */

#include <stdio.h>
#define MAXLINE 1000 

int  get_line(char s[], int lim);
void reverse (char line[], int len);
char line[MAXLINE];
char reverse_line[MAXLINE];

int main()
{

	int len;        
	
	/* init arrays */
	
	for (int i = 0; i < MAXLINE; i++) {
		line[i] = 0;
		reverse_line[i] = 0;
	}
		
        
	while ((len = get_line(line, MAXLINE)) > 0) {
		reverse(line,len);
		
		/* print reversed string */
		for (int j = 0; j < len; j++) {
			printf("%c",reverse_line[j]);
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

/* this should return an array, but pointers are dealt in chapter 5 :p */
void reverse (char line[], int len) {
	
	
	for (int i = len; i >= 0  ; i--) {
		/* we could just print the reversed string here but storing it */
		/*   in a different array is an exercise by itself ;p 	       */

                reverse_line[(i-len)*-1] = line[i];	

                }
		
}



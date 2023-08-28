/* Exercise 2.5. Write a function any(s1,s2), which returns the first location in the string s1  */
/* where any character from the string s2 occurs, or -1 if s1 contains no characters from s2    */
 

#include <stdio.h>

int any(char[], char[]);



int main() {

char s1[] = "oe";
char s2[] = "hello world";

int match;

match = any(s1, s2);

printf("%d\n", match);
}


int any(char s1[], char s2[]) 
{
	int a,b,k;
	int pos = -1;
	for (a = 0; s1[a] != '\0'; a++) 
 	{

		for (b = k = 0; s2[b] != '\0'; b++)
		{

			if ((s2[b] == s1[a]) && pos == -1) 
			{
		
			  pos = b;
				
			}
			
		}
		
	}
	return pos;

}

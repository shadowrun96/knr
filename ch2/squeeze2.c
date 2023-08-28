/* Exercise 2.4. Write an alternate version of squeeze(s1, s2) that deletes each character */
/* in the string s1 that matches any character in the string s2 */

#include <stdio.h>

void squeeze2(char[], char[]);


int main() {

char s1[] = "oe";
char s2[] = "hello world";



squeeze2(s1,s2);


/* print squeeze2 string */

for (int x = 0; s2[x] != '\0'; x++) 
	printf("%c",s2[x]);

printf("\n");


void squeeze2(char s1[], char s2[]) 
{
	int a,b,k;
	for (a = 0; s1[a] != '\0'; a++) 
 	{

		for (b = k = 0; s2[b] != '\0'; b++)
		{


			if (s2[b] != s1[a])
				s2[k++] = s2[b];
		}
		s2[k] = '\0';
	}

}

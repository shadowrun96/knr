/* Exercise 2.6. Rewrite the function lower, which converts upper case letters to lower case,  */
/* with a conditional expression instead of if-else. */

#include <stdio.h>

int lower(int);

int main() {

char c = 'Z';
printf("%c\n",lower(c));


}

int lower(int c)
{

	return (c >='A' && c<='Z') ? c + 'a' - 'A' : c;
}




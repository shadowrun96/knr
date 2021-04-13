/* Exercise 2.2. Write a for loop equivalent to the for loop above without using && or || */

#include <stdio.h>

int main() {

	int i,lim;
	char c;
	lim = 1024;
	char s[lim];


//	for (int i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
//		s[i] = c;

	while (c != EOF) {
		c=getchar();
		if (c == '\n') break;
		
		if (i >lim-1) break;
		s[i]=c;
		i = i + 1;
	}

}



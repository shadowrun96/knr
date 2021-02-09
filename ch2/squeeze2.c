/* Exercise 2-4. Write an alternate version of squeeze(s1,s2) that deletes any character */
/* in s1 that matches any character in the string s2. 					 */

#include <stdio.h>

int squeeze(char s1[], char s2[]);


int main() {
}


int squeeze(char s1[], char s2[]) {
	
	
	for (int i = j = 0; s1[j] != '\0'; j++) {
		for (int k = 0; s2[k] != '\0'; k++) {
			if (s1[j] != s2[k]) {
				s1[i++] = s[k];
			}
		}
	

	s1[i] = '\0';
	}






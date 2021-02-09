#include <stdio.h>

void squeeze(char s[], int c);

int main() 
{

	int c = 65;
	char s[] = "AAA";
	squeeze(s,c);

}

void squeeze(char s[], int c) 
{
	int i,j;
	
	for (i = j = 0; s[i] != '\0'; i++) 

		if (s[i] != c) {
			s[j++] = s[i];


		}
	s[j] = '\0';





	for (int k = 0; s[k] !='\0'; k++) {
		printf("%c",s[k]);
	}


		printf("\n");
}



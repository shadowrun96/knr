/* Exercise 2-3. Write the function htoi(s), which converts a string of */
/* hexadecimal digits (including an optional 0x or 0X) into its 	*/
/* equivalent integer value.						*/
/* The allowable digits are 0 through 9, a through f, and A through F.  */

#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char h[]);

int main() {

	int integer_res;

	integer_res = htoi("0xAAFF");
	
	printf("Integer result:%d\n",integer_res);
}




int htoi(char h[]) {
	int result = 0;
	int len = strlen(h);
	
	/* if hex string doesn't begin with 0x or 0X return -1 */

	if (h[0] != '0' && (h[1] != 'x' || h[1] != 'X')) {
		return -1;
	} 
	else {
		for (int i = 2; h[i] !='\0'; i++) {

			switch(tolower(h[i]))
			{

				case '0':
				result = (int) result + 0 * pow(16,len-i-1);
				break;
				case '1':
				result = (int) result + 1 * pow(16,len-i-1);
				break;
				case '2':
				result = (int) result + 2 * pow(16,len-i-1);
				break;
				case '3':
				result = (int) result + 3 * pow(16,len-i-1);
				break;
				case '4':
				result = (int) result + 4 * pow(16,len-i-1);
				break;
				case '5':
				result = (int) result + 5 * pow(16,len-i-1);
				break;
				case '6':
				result = (int) result + 6 * pow(16,len-i-1);
				break;
				case '7':
				result = (int) result + 7 * pow(16,len-i-1);
				break;
				case '8':
				result = (int) result + 8 * pow(16,len-i-1);
				break;
				case '9':
				result = (int) result + 9 * pow(16,len-i-1);
				break;
				case 'a':
				result = (int) result + 10 * pow(16,len-i-1);
				break;
				case 'b':
				result = (int) result + 11 * pow(16,len-i-1);
				break;
				case 'c':
				result = (int) result + 12 * pow(16,len-i-1);
				break;
				case 'd':
				result = (int) result + 13 * pow(16,len-i-1);
				break;
				case 'e':
				result = (int) result + 14 * pow(16,len-i-1);
				break;
				case 'f':
				result = (int) result + 15 * pow(16,len-i-1);
				break;
		}

	   }
	
	}

	return result;
}




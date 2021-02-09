#include <stdio.h>

int main() {

int x = 65;

int and_x	=	x & 0177;
int or_x	=	x | 66;
int left_x 	= 	x << 2;
int right_x 	= 	x >> 2;
int compl_x	=	x & ~077;



printf("x & 0177 = %d\n", and_x);
printf("x | 66 = %d\n",or_x);
printf("x << 2 = %d\n",left_x);
printf("x ~077 = %d\n",compl_x);



}


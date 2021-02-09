#include <stdio.h>

int bitcount(unsigned x);
int main() 
{

	unsigned x = 65;
	unsigned x_bits = bitcount(x);

	printf("65 has %d bits on.\n",x_bits);	
}

int bitcount(unsigned x) 
{
	int b;
	for (b = 0; x != 0; x >>=1)
		if (x & 01)
			b++;
	return b;
}

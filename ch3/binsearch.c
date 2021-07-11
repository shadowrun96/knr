/* Exercise 3.1. Our binary search makes two tests inside the loop, when one would suffice */
/* (at the price of more tests outside). Write a version with only one test inside the */
/* loop and measure the difference in run-time. */

#include <stdio.h>

int binsearch(int, int[], int);

int main() {

int v[] = {3,5,7,9,11,23,46,75,88,123,200,300,594,600,777,888,900,1100,1345,1576,2000};
int n = 21;
int x = 2000;

int pos;

pos = binsearch(x,v,n);

printf("%d",pos);

}


int binsearch(int x, int v[], int n) 
{
int low, high, mid;

low = 0;
high = n - 1;
while (low <= high) {
	mid = (low+high) / 2;
	if (x < v[mid])
		high = mid - 1;
	else if (x > v[mid])
		low = mid + 1;
	else /* value found */
		return mid;
	}
return -1;
}

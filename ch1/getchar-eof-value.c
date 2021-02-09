/* Exercise 1-6. Verify that the expression getchar() != EOF 	*/
/* is 0 or 1 							*/

#include <stdio.h>

main()
{
	int c;
	int t; 
	while ( t=(getchar()  !=  EOF)) {
		printf("This is inside the getchar() while loop:%1d\n",t); 

	}
	printf("\n");
	printf("This is outside the getchar() while loop %1d\n",t);
}


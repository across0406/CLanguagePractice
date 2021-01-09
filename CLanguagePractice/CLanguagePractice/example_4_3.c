#include "example_4_3.h"

#include <stdio.h>

int example_4_3_main()
{
	printf( "\n\n ***** program 4-3 start ***** \n\n" );

	int count = 0;
	int sum = 0;

	for ( count = 1; count <= 100; count = count + 1 )
	{
		sum += count;
	}

	printf( " The summation from 1 to 100 is %d \n", sum );

	printf( "\n\n ***** program 4-3 end ***** \n\n" );

	return 0;
}

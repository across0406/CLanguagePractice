#include "example_4_4.h"

#include <stdio.h>

int example_4_4_main()
{
	printf( "\n\n ***** program 4-4 start ***** \n\n" );

	int count = 0;
	int sum = 0;

	for ( count = 1; count <= 100; ++count )
	{
		sum += count;
	}

	printf( " The summation from 1 to 100 is %d \n", sum );

	printf( "\n\n ***** program 4-4 end ***** \n\n" );

	return 0;
}

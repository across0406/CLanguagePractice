#include "example_4_5.h"

#include <stdio.h>

int example_4_5_main()
{
	printf( "\n\n ***** program 4-5 start ***** \n\n" );

	int value = 1;
	int result = 0;

	result = value++ - 1;

	printf( " value  = %d, result = %d \n", value, result );

	result = ++value + 1;

	printf( " value  = %d, result = %d \n", value, result );

	printf( "\n\n ***** program 4-5 end ***** \n\n" );

	return 0;
}

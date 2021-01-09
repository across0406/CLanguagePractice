#include "example_4_8.h"

#include <stdio.h>

int example_4_8_main()
{
	printf( "\n\n ***** program 4-8 start ***** \n\n" );

	int value = 3;
	int result = 0;

	result = value-- - 1;

	printf( " value  = %d, result = %d \n", value, result );

	result = --value + 1;

	printf( " value  = %d, result = %d \n", value, result );

	printf( "\n\n ***** program 4-8 end ***** \n\n" );

	return 0;
}

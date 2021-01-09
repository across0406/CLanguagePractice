#include "example_3_11.h"

#include <stdio.h>

int example_3_11_main()
{
	printf( "\n\n ***** program 3-11 start ***** \n\n" );

	int value_1 = 10, value_2;
	float value_3 = 12.34f, value_4;

	value_4 = value_1;
	value_2 = value_3;

	printf( "value_1 = %d, value_2 = %d \n", value_1, value_2 );
	printf( "value_3 = %f, value_4 = %f \n", value_3, value_4 );

	printf( "\n\n ***** program 3-11 end ***** \n\n" );

	return 0;
}

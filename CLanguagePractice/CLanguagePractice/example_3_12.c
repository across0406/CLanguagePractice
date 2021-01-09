#include "example_3_12.h"

#include <stdio.h>

int example_3_12_main()
{
	printf( "\n\n ***** program 3-12 start ***** \n\n" );

	float value_1 = 0.0f;
	float value_2 = 0.0f;

	value_1 = 12.345f;
	value_2 = (int)value_1;

	printf( "value_1 = %f, value_2 = %f \n", value_1, value_2 );

	printf( "\n\n ***** program 3-12 end ***** \n\n" );

	return 0;
}

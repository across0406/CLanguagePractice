#include "example_3_9.h"

#include <stdio.h>

int example_3_9_main()
{
	printf( "\n\n ***** program 3-9 start ***** \n\n" );

	unsigned char value = 32;
	int count = 0;

	for ( value = 32; value <= 127; ++value )
	{
		if ( count < 7 )
		{
			printf( "[%3d:%c] ", value, value );
			count++;
		}
		else
		{
			printf( "[%3d:%c] \n", value, value );
			count = 0;
		}
	}

	printf( "\n\n ***** program 3-9 end ***** \n\n" );

	return 0;
}

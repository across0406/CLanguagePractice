#include "example_9_7.h"

#include <stdio.h>

int example_9_7_main()
{
	printf( "\n\n ***** program 9-7 start ***** \n\n" );

	int value = 0;
	int* pointer = NULL;

	printf( " Input a number : " );
	scanf( "%d", &value );

	if ( value != 1 )
	{
		pointer = &value;
	}

	if ( pointer == NULL )
	{
		printf( " The integer pointer variable pointer is not used. \n" );
	}
	else
	{
		printf( " The value of *pointer is %d. \n", *pointer );
	}

	printf( "\n\n ***** program 9-7 end ***** \n\n" );

	return 0;
}

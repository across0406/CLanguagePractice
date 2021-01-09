#include "example_4_9.h"

#include <stdio.h>

int example_4_9_main()
{
	printf( "\n\n ***** program 4-9 start ***** \n\n" );

	int value_1 = 0;
	int value_2 = 0;

	printf( " Input two numbers : " );
	scanf( "%d %d", &value_1, &value_2 );

	if ( value_1 == value_2 )
	{
		printf( " The two numbers are equal. \n" );
	}

	if ( value_1 != value_2 )
	{
		printf( " The two numbers are not equal. \n" );
	}

	if ( value_1 > value_2 )
	{
		printf( " %d is greater than %d. \n", value_1, value_2 );
	}

	if ( value_1 < value_2 )
	{
		printf( " %d is less than %d. \n", value_1, value_2 );
	}

	if ( value_1 >= value_2 )
	{
		printf( " %d is equal or greater than %d. \n", value_1, value_2 );
	}

	if ( value_1 <= value_2 )
	{
		printf( " %d is equal or less than %d. \n", value_1, value_2 );
	}

	printf( "\n\n ***** program 4-9 end ***** \n\n" );

	return 0;
}

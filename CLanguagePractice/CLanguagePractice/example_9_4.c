#include "example_9_4.h"

#include <stdio.h>

int example_9_4_main()
{
	printf( "\n\n ***** program 9-4 start ***** \n\n" );

	int value_1 = 1;
	int value_2 = 2;
	int* pointer = NULL;
	
	printf( " [ Before ] value_1 = %d, value_2 = %d. \n", value_1, value_2 );

	pointer = &value_1;
	value_2 = *pointer;
	*pointer = 0;

	printf( " [ After ] value_1 = %d, value_2 = %d. \n", value_1, value_2 );

	printf( "\n\n ***** program 9-4 end ***** \n\n" );

	return 0;
}

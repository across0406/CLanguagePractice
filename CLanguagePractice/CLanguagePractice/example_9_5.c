#include "example_9_5.h"

#include <stdio.h>

int example_9_5_main()
{
	printf( "\n\n ***** program 9-5 start ***** \n\n" );

	int* pointer_1 = NULL;
	float* pointer_2 = NULL;
	char* pointer_3 = NULL;

	int value_1 = 100;
	float value_2 = 1.23f;
	char value_3 = 'a';

	pointer_1 = &value_1;
	printf( "pointer_1 = %d \n", *pointer_1 );

	pointer_2 = &value_2;
	printf( "pointer_2 = %f \n", *pointer_2 );

	pointer_3 = &value_3;
	printf( "pointer_3 = %c \n", *pointer_3 );

	printf( "\n\n ***** program 9-5 end ***** \n\n" );

	return 0;
}

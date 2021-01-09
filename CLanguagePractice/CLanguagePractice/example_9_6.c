#include "example_9_6.h"

#include <stdio.h>

int example_9_6_main()
{
	printf( "\n\n ***** program 9-6 start ***** \n\n" );

	void* any_pointer = NULL;
	int value_1 = 100;
	float value_2 = 1.23f;
	char value_3 = 'a';

	any_pointer = &value_1;
	printf( "any_pointer = %d \n", *(int*)any_pointer );

	any_pointer = &value_2;
	printf( "any_pointer = %f \n", *(float*)any_pointer );

	any_pointer = &value_3;
	printf( "any_pointer = %c \n", *(char*)any_pointer );

	printf( "\n\n ***** program 9-6 end ***** \n\n" );

	return 0;
}

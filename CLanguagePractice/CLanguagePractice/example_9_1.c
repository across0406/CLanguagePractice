#include "example_9_1.h"

#include <stdio.h>

int example_9_1_main()
{
	printf( "\n\n ***** program 9-1 start ***** \n\n" );

	int value_1 = 20;
	int value_2 = 50;
	int* pointer = NULL;

	printf( " The stored value of value_1 is %d. \n", value_1 );
	printf( " The address value of value_1 is %p. \n", &value_1 );
	printf( " The stored value of value_2 is %d. \n", value_2 );
	printf( " The addres value of value_2 is %p. \n", &value_2 );
	printf( " The stored value of pointer is %d. \n", pointer );

	pointer = &value_1;

	printf( " The stored value of pointer is %p after being assigned the address of value_1. \n", pointer );

	pointer = &value_2;

	printf( " The stored value of pointer is %p after being assigned the address of value_2. \n", pointer );

	printf( "\n\n ***** program 9-1 end ***** \n\n" );

	return 0;
}

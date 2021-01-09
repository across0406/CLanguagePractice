#include "example_9_3.h"

#include <stdio.h>

int example_9_3_main()
{
	printf( "\n\n ***** program 9-3 start ***** \n\n" );

	int value = 20;
	int* pointer = NULL;

	printf( " The stored value of value is %d. \n", value );
	printf( " The address value of value is %p. \n", &value );
	printf( " The stored value of pointer is %d. \n", pointer );

	pointer = &value;

	printf( " The stored value of pointer is %p after being assigned the address of value. \n", pointer );
	printf( " *pointer value is %d. \n", *pointer );

	value = 50;

	printf( " Stored 50 at value. \n" );
	printf( " The stored value of value is %d. \n", value );
	printf( " *pointer value is %d. \n", *pointer );

	*pointer = 100;

	printf( " Stored 100 at *pointer. \n" );
	printf( " The stored value of value is %d. \n", value );
	printf( " *pointer value is %d. \n", *pointer );

	printf( "\n\n ***** program 9-3 end ***** \n\n" );

	return 0;
}

#include "example_3_6.h"

#include <stdio.h>

int example_3_6_main()
{
	printf( "\n\n ***** program 3-6 start ***** \n\n" );

	printf( " short 자료형의 크기 : %llu\n", sizeof( short ) );
	printf( " int 자료형의 크기 : %llu\n", sizeof( int ) );
	printf( " long 자료형의 크기 : %llu\n", sizeof( long ) );
	printf( " unsigned short 자료형의 크기 : %llu\n", sizeof( unsigned short ) );
	printf( " unsigned int 자료형의 크기 : %llu\n", sizeof( unsigned int ) );
	printf( " unsigned long 자료형의 크기 : %llu\n", sizeof( unsigned long ) );

	printf( "\n\n ***** program 3-6 end ***** \n\n" );

	return 0;
}

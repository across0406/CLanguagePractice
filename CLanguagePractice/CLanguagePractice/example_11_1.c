#include "example_11_1.h"

#include <stdio.h>
#include <stdlib.h>

int example_11_1_main()
{
	printf( "\n\n ***** program 11-1 start ***** \n\n" );

	char name[ 20 ] = "";
	int kor = 0;
	int math = 0;
	int eng = 0;
	int total = 0;
	float average = 0.0f;

	char* in_file_name = "";
	char* out_file_name = "";
	FILE* in_file = NULL;
	FILE* out_file = NULL;

	in_file_name = "D:\\inputfile.txt";
	out_file_name = "D:\\outputfile.txt";

	if ( ( in_file = fopen( in_file_name, "r" ) ) == NULL )
	{
		printf( " Failed to open input file. \n" );
		exit( 1 );
	}

	if ( ( out_file = fopen( out_file_name, "w" ) ) == NULL )
	{
		printf( " Failed to open output file. \n" );
		exit( 1 );
	}

	while ( !feof( in_file ) )
	{
		fscanf( in_file, "%s %d %d %d", name, &eng, &math, &kor );
		printf( "[ name = %s ] : [ KOR = %d ] : [ MATH = %d ] : [ ENG = %d ] \n", name, eng, math, kor );

		total = kor + math + eng;
		average = total / 3.0;

		printf( "\t\t\t [ total = %d ] : [ average = %f ] \n\n", total, average );
		fprintf( out_file, " [ name = %s ] : [ total = %d ] : [ average = %f ] \n", name, total, average );
	}

	fclose( in_file );
	fclose( out_file );

	printf( "\n\n ***** program 11-1 end ***** \n\n" );

	return 0;
}

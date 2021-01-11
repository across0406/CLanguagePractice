#include "example.h"
#include "example_2_6.h"
#include "example_3_3.h"
#include "example_3_4.h"
#include "example_3_6.h"
#include "example_3_9.h"
#include "example_3_11.h"
#include "example_3_12.h"
#include "example_4_2.h"
#include "example_4_3.h"
#include "example_4_4.h"
#include "example_4_5.h"
#include "example_4_8.h"
#include "example_4_9.h"
#include "example_9_1.h"
#include "example_9_2.h"
#include "example_9_3.h"
#include "example_9_4.h"
#include "example_9_5.h"
#include "example_9_6.h"
#include "example_9_7.h"
#include "example_11_1.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define EXIT			0
#define EXAMPLE_2_6		1
#define EXAMPLE_3_3		2
#define EXAMPLE_3_4		3
#define EXAMPLE_3_6		4
#define EXAMPLE_3_9		5
#define EXAMPLE_3_11	6
#define EXAMPLE_3_12	7
#define EXAMPLE_4_2		8
#define EXAMPLE_4_3		9
#define EXAMPLE_4_4		10
#define EXAMPLE_4_5		11
#define EXAMPLE_4_8		12
#define EXAMPLE_4_9		13
#define EXAMPLE_9_1		14
#define EXAMPLE_9_2		15
#define EXAMPLE_9_3		16
#define EXAMPLE_9_4		17
#define EXAMPLE_9_5		18
#define EXAMPLE_9_6		19
#define EXAMPLE_9_7		20
#define EXAMPLE_11_1	21

int main()
{
	int main_result = 0;
	int menu = EXAMPLE_2_6;

	struct Example* example = NULL;
	example = (struct Example*)malloc( sizeof( struct Example ) );

	if ( !example )
	{
		main_result = 1;
	}
	else
	{
		while ( menu != EXIT )
		{
			printf( "Please input example unit: " );

			scanf( "%d", &menu );

			switch ( menu )
			{
			case EXAMPLE_2_6:
				example->example_main = example_2_6_main;
				break;

			case EXAMPLE_3_3:
				example->example_main = example_3_3_main;
				break;

			case EXAMPLE_3_4:
				example->example_main = example_3_4_main;
				break;

			case EXAMPLE_3_6:
				example->example_main = example_3_6_main;
				break;

			case EXAMPLE_3_9:
				example->example_main = example_3_9_main;
				break;

			case EXAMPLE_3_11:
				example->example_main = example_3_11_main;
				break;

			case EXAMPLE_3_12:
				example->example_main = example_3_12_main;
				break;

			case EXAMPLE_4_2:
				example->example_main = example_4_2_main;
				break;

			case EXAMPLE_4_3:
				example->example_main = example_4_3_main;
				break;

			case EXAMPLE_4_4:
				example->example_main = example_4_4_main;
				break;

			case EXAMPLE_4_5:
				example->example_main = example_4_5_main;
				break;

			case EXAMPLE_4_8:
				example->example_main = example_4_8_main;
				break;

			case EXAMPLE_4_9:
				example->example_main = example_4_9_main;
				break;

			case EXAMPLE_9_1:
				example->example_main = example_9_1_main;
				break;

			case EXAMPLE_9_2:
				example->example_main = example_9_2_main;
				break;

			case EXAMPLE_9_3:
				example->example_main = example_9_3_main;
				break;

			case EXAMPLE_9_4:
				example->example_main = example_9_4_main;
				break;

			case EXAMPLE_9_5:
				example->example_main = example_9_5_main;
				break;
			
			case EXAMPLE_9_6:
				example->example_main = example_9_6_main;
				break;

			case EXAMPLE_9_7:
				example->example_main = example_9_7_main;
				break;
				
			case EXAMPLE_11_1:
				example->example_main = example_11_1_main;
				break;

			case EXIT:
			default:
				break;
			}

			if ( menu == EXIT )
			{
				printf( "Bye\n" );
			}
			else
			{
				main_result = example->example_main();
			}
		}
	}

	free( example );
	example = NULL;

	return 0;
}
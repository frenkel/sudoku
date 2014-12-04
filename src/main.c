#include <stdio.h>
#include "print.h"
#include "parse.h"
#include "verify.h"

int main()
{
	int grid[9 * 9];

	load(grid);

	print(grid);

	if (verify_rows(grid))
		printf("Valid rows\n");
	else
		printf("Invalid rows\n");

	return 0;
}

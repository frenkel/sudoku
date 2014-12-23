#include <stdio.h>
#include "print.h"
#include "parse.h"
#include "verify.h"

int main()
{
	int grid[9 * 9];

	load(grid);

	print(grid);

	if (verify(grid, 1))
		printf("Valid rows, columns and blocks\n");
	else
		printf("Invalid rows, columns and blocks\n");

	return 0;
}

#include <stdio.h>
#include "print.h"
#include "parse.h"
#include "verify.h"

int main()
{
	int grid[9 * 9];

	load(grid);

	print(grid);

	if (verify(grid))
		printf("Valid rows and columns\n");
	else
		printf("Invalid rows and columns\n");

	return 0;
}

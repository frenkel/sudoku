#include <stdio.h>
#include "print.h"
#include "parse.h"

int main()
{
	int grid[9 * 9];

	load(grid);

	print(grid);

	return 0;
}

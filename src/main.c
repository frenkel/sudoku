#include <stdio.h>
#include "print.h"
#include "parse.h"
#include "verify.h"
#include "generate.h"

int main(int argc, char *argv[])
{
	int grid[9 * 9];

	if (argc == 1) {
		load(grid);
	} else if (argc == 2 && argv[1][0] == '-'
		 && argv[1][1] == 'g') {
		generate(grid);
	}

	print(grid);

	if (verify(grid, 1))
		printf("Valid rows, columns and blocks\n");
	else
		printf("Invalid rows, columns and blocks\n");

	return 0;
}

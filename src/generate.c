#include <stdlib.h>
#include "verify.h"

void generate(int *grid)
{
	int row;
	int column;
	int value;
	int prev_value;

	for (row = 0; row < 9; row++)
		for (column = 0; column < 9; column++)
			grid[row * 9 + column] = 0;

	for (row = 0; row < 9; row++)
		for (value = 1; value <= 9; value++) {
			column = arc4random() % 9;
			prev_value = grid[row * 9 + column];
			grid[row * 9 + column] = value;

			if (!verify(grid, 0))
				grid[row * 9 + column] = prev_value;
		}

}

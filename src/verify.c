int verify(int *grid, int complete)
{
	int found_h[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int found_v[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int found_b[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int row;
	int column;
	int block;

	for (row = 0; row < 9; row++) {

		for (column = 0; column < 9; column++) {
			/* prevent overflow using modulo 9 */
			found_h[grid[column + row * 9] % 10]++;
			/* switch column and row to walk vertical */
			found_v[grid[row + column * 9] % 10]++;

			/* walk the block left to right, top to bottom
			   by doing three steps, then skipping 9, etc */
			block = column % 3 + (column / 3) * 9;
			/* walk all blocks left to right,
			   skip to next block after every row */
			block += row * 3 + (row / 3) * 18;
			found_b[grid[block] % 10]++;
		}

		for (column = 1; column <= 9; column++) {
			if (found_h[column] > 1 || found_v[column] > 1
					|| found_b[column] > 1)
				return 0;
			else if ((found_h[column] == 0 || found_v[column] == 0
					 || found_b[column] == 0) && complete)
				return 0;

			/* reset for next row */
			found_h[column] = 0;
			found_v[column] = 0;
			found_b[column] = 0;
		}
	}

	return 1;
}

int verify(int grid[])
{
	int found_h[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int found_v[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int row;
	int column;

	for (row = 0; row < 9; row++) {

		for (column = 0; column < 9; column++) {
			/* prevent overflow using modulo 9 */
			found_h[grid[column + row * 9] % 9] = 1; 
			/* switch column and row to walk vertical */
			found_v[grid[row + column * 9] % 9] = 1; 
		}

		for (column = 0; column < 9; column++) {
			if (found_h[column] != 1 || found_v[column] != 1)
				return 0;
			else {
				/* reset for next row */
				found_h[column] = 0;
				found_v[column] = 0;
			}
		}
	}

	return 1;
}

int verify_rows(int grid[])
{
	int found[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int row;
	int column;

	for (row = 0; row < 9; row++) {

		for (column = 0; column < 9; column++) {
			/* prevent overflow using modulo 9 */
			found[grid[column + row * 9] % 9] = 1; 
		}

		for (column = 0; column < 9; column++) {
			if (found[column] != 1)
				return 0;
			else
				/* reset for next row */
				found[column] = 0;
		}
	}

	return 1;
}

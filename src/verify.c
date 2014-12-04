int verify_rows(int grid[])
{
	int row_total = 0;
	int row;
	int column;

	for (row = 0; row < 9; row++) {

		row_total = 0;

		for (column = 0; column < 9; column++) {
			row_total += grid[column + row * 9]; 
		}

		if (row_total != 45) {
			return 0;
		}
	}

	return 1;
}

void generate(int *grid)
{
	int row;
	int column;
	for (row = 0; row < 9; row++)
		for (column = 0; column < 9; column++)
			grid[row * 9 + column] = 0;
}

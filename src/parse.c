#include <stdio.h>

void load(int grid[])
{
	int i;
	char c;
	
	for (i = 0; i < 9 * 9; c = getchar()) {
		if (c >= '1' && c <= '9')
			grid[i++] = c - '0';
		if (c == ' ')
			grid[i++] = 0;
	}
}

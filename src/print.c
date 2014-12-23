#include <stdio.h>

void print(int *grid)
{
	int i;

	for (i = 0; i < 9 * 9; i++) {
		printf("%d", grid[i]);

		if (i != 0 && (i + 1) % 9 == 0) {
			printf("\n");
			
			if (i == (9 * 3 - 1) || i == (9 * 6 - 1)) 
				printf("---|---|---\n");
		
		} else if ((i + 1) % 3 == 0)
			printf("|");
	}
}

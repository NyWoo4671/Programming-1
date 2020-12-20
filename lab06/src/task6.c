#define SIZE 3

int main()
{
	int array[SIZE][SIZE] = {{1, 2, 3},
							 {4, 5, 6},
							 {7, 8, 3}};
	int result[SIZE][SIZE] = {0};
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			for (int k = 0; k < SIZE; k++)
			{
				result[i][j] += array[i][k] * array[k][j];
			}
		}
	}
	return 0;
}
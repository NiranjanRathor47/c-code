#include <stdio.h>
int main()
{
	int i, j, p, q, n, m;
	int a1[100][100], a2[100][100], sum[100][100];
	printf("plzz enter the  row & colum size\n ");
	scanf("%d %d", &p, &q);

	printf("plzz enter the first matrix\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}

	printf("plzz enter the row & colum size\n ");
	scanf("%d %d", &m, &n);

	printf("plzz enter the second matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}

	printf("sum of enter matrix\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum[i][j] = a1[i][j] + a2[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
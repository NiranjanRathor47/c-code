#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, t;
	scanf("%d", &t);

	while (t--) //  this is for many of test case running
	{
		int n;
		scanf("%d", &n);
		int k = 0;
		if (n < 2)
			printf("Not prime\n");
		else
		{
			for (i = 2; i * i <= n; i++)
			{
				if (n % i == 0)
				{
					k = 1;
					break;
				}
			}
			if (k == 1)
				printf("Not prime\n");
			else
				printf("Prime\n");
		}
	}
	return 0;
}

#include <stdio.h>
int main()
{
    int i, j, k, hg = 0, max = -63;
    // scanf("%d",&n);
    int arr[6][6];

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            hg = arr[i + 1][j + 1];

            for (k = 0; k < 3; k++)
            {

                hg = hg + arr[i][j + k] + arr[i + 2][j + k];
            }
            if (hg > max)
            {
                max = hg;
            }
        }
    }

    printf("%d", max);

    return 0;
}
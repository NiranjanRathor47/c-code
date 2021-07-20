#include <stdio.h>
int main()
{
    int i, j, n, k = 0, f;
    printf("enter number = ");
    scanf("%d", &n);
    f = 2 * n + 4;
    k = n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < f; j++)
        {
            if (j < k + 1 && j >= k - 1)
                printf("* ");
            else if (j < f - k - 1 && j >= f - k - 3)
                printf("* ");
            else
                printf("  ");
        }
        k--;
        printf("\n");
    }
    return 0;
}

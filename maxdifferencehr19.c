#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int md = arr[1] - arr[0];

    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] - min > md)
        {
            md = arr[i]-min;
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d", abs(md));

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i, n, sum = 0, sum1 = 0;
    char gender;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf(" %c", &gender);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    if (gender == 'b')
    {
        printf("%d", sum);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum1 = sum1 + arr[i];
        }
    }

    if (gender == 'g')
    {
        printf("%d", sum1);
    }

    return 0;
}
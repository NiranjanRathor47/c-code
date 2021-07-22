#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    int numberOfSwaps = 0, temp = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                numberOfSwaps++;
            }
        }
        if (numberOfSwaps == 0)
        {
            break;
        }
    }
    printf("Array is sorted in %d swaps.\n", numberOfSwaps);
    printf("First Element: %d\n", arr[0]);
    printf("Last Element: %d\n", arr[n - 1]);

    return 0;
}
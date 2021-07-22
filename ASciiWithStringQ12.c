#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i, n, k = 0;

    printf("Enter  the sentence : ");
    scanf("%s", str);
    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (str[i] >= 65 && str[i] < 90)
            k++;
    }
    printf("%d\n", k + 1);

    return 0;
}
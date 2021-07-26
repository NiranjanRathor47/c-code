#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    int i, n,t;

    scanf("%d",&t);
    while (t--)
    {
        int k = 0;
        printf("Enter  the string : ");
    scanf("%s", str);
    n = strlen(str);

    for (i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n - i - 1])
            k++;
    }
    if (k == i)
        printf("YES\n");
    else
        printf("NO\n");
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int n, r = 0, s = 0;
    scanf("%d", &n);

    while (n>0)
    {       
        n = n & (n<<1);
        r++;
    }
    printf("%d", r);

    return 0;
}

/* 
if (n & 1)
            r++;
       else
            r = 0;
       if (s < r)
           s = r;
        n >>= 1;     // this is important
*/
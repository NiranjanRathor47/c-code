#include <stdio.h>
// find size of variable
int main()
{
    int a;
    char b;
    float c;
    double d;
            
    printf("size of integer = %d\n", sizeof(a));
    printf("size of character = %d\n", sizeof(b));
    printf("size of floating point = %d\n", sizeof(c));
    printf("size of double = %d\n", sizeof(d));

    return 0;
}


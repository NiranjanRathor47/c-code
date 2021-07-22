#include <stdio.h>
// to swaping numbers to use temp variable.
int main()
{
    int a,b,temp;
    printf("plzz enter swaping num a & b =\n");
    scanf("%d %d",&a,&b);

    temp = a;
    a = b;
    b = temp;

    printf("swap num a=%d\n, b=%d",a,b);

    a*=4;
    b-=3;
    printf("swap num a=%d\n, b=%d",a,b);


    return 0;
}
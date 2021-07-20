#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,r=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0 ;
    char str[1000];
    scanf("%s",str);
    
    int length = strlen(str);
    
    for(i=0;i<length;i++)
    {
       if( str[i]=='0')
       {
           r=r+1;
       }
    }
    printf("%d ",r);
    for(i=0;i<length;i++)
    {
       if( str[i]=='1')
       {
           r1=r1+1;
       }
    }
    printf("%d ",r1);
    for(i=0;i<length;i++)
    {
       if( str[i]=='2')
       {
           r2=r2+1;
       }
    }
    printf("%d ",r2);
    for(i=0;i<length;i++)
    {
       if( str[i]=='3')
       {
           r3=r3+1;
       }
    }
    printf("%d ",r3);
    for(i=0;i<length;i++)
    {
       if( str[i]=='4')
       {
           r4=r4+1;
       }
    }
    printf("%d ",r4);
    for(i=0;i<length;i++)
    {
       if( str[i]=='5')
       {
           r5=r5+1;
       }
    }
    printf("%d ",r5);
    for(i=0;i<length;i++)
    {
       if( str[i]=='6')
       {
           r6=r6+1;
       }
    }
    printf("%d ",r6);
    for(i=0;i<length;i++)
    {
       if( str[i]=='7')
       {
           r7=r7+1;
       }
    }
    printf("%d ",r7);
    for(i=0;i<length;i++)
    {
       if( str[i]=='8')
       {
           r8=r8+1;
       }
    }
    printf("%d ",r8);
    for(i=0;i<length;i++)
    {
       if( str[i]=='9')
       {
           r9=r9+1;
       }
    }
    printf("%d ",r9);
    
    return 0;
}
 

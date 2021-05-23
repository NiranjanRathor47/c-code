#include<stdio.h>
#include<math.h>

int main ()
{
    int i,n;
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
     for(i=0;i<n;i++)
     {
         if(arr[i]>=38)
         {
             if((arr[i]+2)%5==0 || (arr[i]+1)%5==0 )
             {
                 arr[i] = ((arr[i]+2)%5==0)? arr[i]+2:arr[i]+1;
                 printf("%d\n",arr[i]);
             }
              else 
         {
             printf("%d\n",arr[i]);
         }
         }
         
         else 
         {
             printf("%d\n",arr[i]);
         }
     }
    
    
   return 0; 
    
}

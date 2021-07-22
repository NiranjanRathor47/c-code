#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,flag=1;
    char ticketnumber[102];
    scanf("%d",&n);
   
    
    for(i=0;i<n;i++){
         scanf("%s",ticketnumber);
        k=strlen(ticketnumber)-2;
     
        for(j=0;j<k;j++){
            if(ticketnumber[j]!=ticketnumber[j+2]){
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("YES\n");
        else    printf("NO\n");
        flag=1;
    }

	return 0;
}
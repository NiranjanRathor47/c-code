#include <stdio.h>
   int main()
{
	int n,c=1,sp;
	printf("Enter n : ");
	scanf("%d",&n);
	sp= 2*n-2;
	for(int i=0;i<n;i++){
		for(int j=0;j<sp;j++){
			printf(" ");
		}
		for(int k=c;k>=1;k--){
			printf("*");
		}
		printf("\n");
		sp-=2;
		c+=2;
	}
	return 0;
}
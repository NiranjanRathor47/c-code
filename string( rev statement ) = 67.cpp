#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int i;
	printf("plzz enter the statement in str \n");
    gets(str);
	
	int length= strlen(str);
	for(i=length-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			str[i]='\0';
			printf("%s \n",&(str[i])+1);
	//	printf("%s\n",str);
		}
	}
	printf("%s\n",str);
	
	return 0;
}

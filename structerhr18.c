#include<stdio.h>
#include<string.h>

struct student
{
	char fn [100];
	char ln [100];
	int a,i,score[100],idno,sum,n ;
};

int main()
{
    struct student s1;

    scanf("%s %s %d\n",s1.fn,s1.ln,&s1.idno);
    scanf("%d",&s1.n);
    
    for(s1.i=0;s1.i<s1.n;s1.i++)
    {
        scanf("%d",&s1.score[s1.i]);
    }

    printf("Name: %s, %s\n",s1.fn,s1.ln);
    printf("ID: %d\n",s1.idno);
  
    for(s1.i=0;s1.i<s1.n;s1.i++)
    {
          int sum =0;
         s1.sum+=s1.score[s1.i];
    }

    s1.a = s1.sum/s1.n;

    if(s1.a<=100 && s1.a>=90)
    {
        printf("Grade: O");
    }
    else if(s1.a<90 && s1.a>=80)
    {
        printf("Grade: E");
    }
    else if(s1.a<80 && s1.a>=70)
    {
        printf("Grade: A");
    }
    else if(s1.a<70 && s1.a>=55)
    {
        printf("Grade: P");
    }
    else if(s1.a<55 && s1.a>=40)
    {
        printf("Grade: D");
    }
    else if (s1.a<40)
    {
        printf("Grade: T");
    } 

    return 0;
}


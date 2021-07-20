#include <stdio.h>
/*      1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
int main() {
   int i, j,n, k = 0, x = 0, y = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <= n; ++i)
    {
      for (j = 1; j <=n - i; ++j)
	   {
         printf("  ");
         x++;
      }
     for (j=0; j!= 2 * i - 1;j++) 
	  {
         if (x <= n - 1) 
		 {
            printf("%d ", i + j);
            ++x;
         }
		  else
		   {
            ++y;
            printf("%d ", (i + j - 2 * y));
           }
      }
      x = y = k = 0;
      printf("\n");
   }
   return 0;
}


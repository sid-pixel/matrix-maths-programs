#include<stdio.h>
#include<math.h>

int main()
{ 
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
 //input the number of rows and columns in both the matrix
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
 
 //enter the number of elements in first matrix
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
 //enter the number of elements in second matrix
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
 //add the matrices and print the sum matrix
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++) 
      {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}

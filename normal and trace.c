#include <stdio.h>
#include <math.h>
 
void main ()
    {
 
 //declare the variables
        static int array[10][10];
        int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;
 
 //input order
        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);

 //input coefficients
        printf("Enter the n coefficients of the matrix \n");
 
 //perform operations
        for (i = 0; i < m; ++i) 
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
                a = array[i][j] * array[i][j];
                sum1 = sum1 + a;
            }
        }
 
 //print the normal
        normal = sqrt(sum1);
        printf("The normal of the given matrix is = %d\n", normal);
        for (i = 0; i < m; ++i) 
        {
            sum = sum + array[i][i];
        }
 
 //print the trace
        printf("Trace of the matrix is = %d\n", sum);
 
    }

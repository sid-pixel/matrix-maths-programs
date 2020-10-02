#include<stdio.h>
#include<math.h>

int main() 
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to different positions in the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
            
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix input by user
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Finding the transpose of the matrix
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        
        {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) 
        
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}

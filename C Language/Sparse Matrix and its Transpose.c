#include <stdio.h>

void main ()
{
    int matrix[10][10];
    int transpose[10][10];
    int i, j, m, n;
    int sparse_counter = 0;
   printf("\n Enter the no. of rows:");
    scanf("%d", &m);
    printf("\n Enter the no. of columns:");
    scanf("%d", &n);
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("Enter Element [%d][%d]:",i+1,j+1 );
            scanf("%d", &matrix[i][j]); 
            if (matrix[i][j] == 0)
            {
                ++sparse_counter;
            }   
        }
    }
    printf("\n Entered Elements:- \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
          printf(" %2d ", matrix[i][j]); 
          if (j == n-1)
          {
              printf("\n");
          }  transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("There are %d number of Zeros.\n", sparse_counter);
    if (sparse_counter > ((m * n) / 2))
    {
        printf("The given matrix is Sparse Matrix !!! \n");
        
        printf("\n Transpose of Sparse Matrix:- \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
          printf(" %2d ",transpose[i][j]); 
          if (j == n-1)
          {
              printf("\n");
          } 
        }
    }
    }
    else
    printf("The given matrix is not a Sparse Matrix \n");
}
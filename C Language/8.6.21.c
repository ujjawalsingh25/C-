#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
 int n_row, n_col;
 int A[MAX][MAX];
}MATRIX;
void input (MATRIX *);
void display (MATRIX);
void multiplication (MATRIX, MATRIX, MATRIX *);
MATRIX multiply(MATRIX ,MATRIX );
void main( )
{
 MATRIX M1, M2, R, T;
 input(&M1);
 input(&M2);
 multiplication(M1,M2, &R);
 display(R);
 T=multiply(M1,M2);
 display(T);
 getchar( );
}
void input (MATRIX *p)
{
 int i, j; 
 printf("Enter the number of rows : ");
 fflush(stdin);
 scanf("%d",&p->n_row);
 printf("Enter the number of columns : ");
 fflush(stdin);
 scanf("%d",&p->n_col);
 for(i=0;i<p->n_row; i++)
 for(j=0;j<p->n_col; j++)
 {
 printf("\nEnter the elements matrix [%d][%d]: ",i+1,j+1);
 fflush(stdin);
 scanf("%d",&p->A[i][j]);
 }
}
void display (MATRIX M)
{
 int i, j;
 for(i=0;i<M.n_row; i++)
 {
 printf("\n");
 for(j=0;j<M.n_col; j++)
 printf("%2d",M.A[i][j]);
 }
}
void multiplication (MATRIX M1, MATRIX M2, MATRIX *p)
{
 int i,j,k;
 if(M1.n_col!=M2.n_row)
 {
 printf("Multiplication of the given matrix is not possible.\n");
 return;
 }
 p->n_row=M1.n_row;
 p->n_col=M2.n_col;
 for(i=0;i<p->n_row; i++)
 for(k=0;k<p->n_col; k++)
 {
 p->A[i][k]=0;
 for(j=0; j<M1.n_col; j++)
 p->A[i][k]+=M1.A[i][j]*M2.A[j][k];
 }
}
MATRIX multiply(MATRIX M1,MATRIX M2)
{
 MATRIX T;
 int i, j, k;
 if(M1.n_col!=M2.n_row)
 {
 printf("Multiplication of the given matrix is not possible.\n");
 exit(1);
 }
 T.n_row=M1.n_row;
 T.n_col=M2.n_col;
 for(i=0;i<T.n_row; i++)
 for(k=0;k<T.n_col; k++)
 {
 T.A[i][k]=0;
 for(j=0; j<M1.n_col; j++)
 T.A[i][k]+=M1.A[i][j]*M2.A[j][k];
 }
 return T;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{
 int n_row, n_col;
 int A[10][10];
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
 printf("\n ");
 T=multiply(M1,M2);
 display(T);
}

void input (MATRIX *p)
{
 int i, j;
 printf("\n Enter the no. of rows:");
 scanf("%d", &p->n_row);
 printf("\n Enter the no. of columns:");
 scanf("%d", &p->n_col);
 for(i=0;i<p->n_row; i++)
 for(j=0;j<p->n_col; j++)
 {
    printf("\n Enter Element [%d][%d]:",i+1,j+1);
    scanf("%d", &p->A[i][j]);
 }
}

void display (MATRIX M)
{
 int i, j;
 for(i=0;i<M.n_row; i++)
 {
 printf("\n");
 for(j=0;j<M.n_col; j++)
 printf(" %2d ",M.A[i][j]);
 }
}

void multiplication (MATRIX M1, MATRIX M2, MATRIX *p)
{
 int i,j,k;
 if(M1.n_col!=M2.n_row)
 {
 printf("\n Matrix multiplication is impossible");
   return ;
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
 printf("\n Matrix multiplication is impossible");
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
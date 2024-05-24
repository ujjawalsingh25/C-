#include<stdio.h>    
#include<stdlib.h> 
#define MAX 10
int main()
{
int a[MAX][MAX],b[MAX][MAX],mul[MAX][MAX],r,c,i,j,k;
printf("Enter the number of rows : ");
scanf("%d",&r);
printf("Enter the number of columns : ");
scanf("%d",&c);
printf("Enter the elements of first matrix : \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the elements of second matrix : \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("Multiplication of the given matrix is \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        mul[i][j]=0;
        for(k=0;k<c;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",mul[i][j]);
    }
printf("\n");
}
return 0;
}
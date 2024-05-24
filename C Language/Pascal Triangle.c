/*Name :- Ujjawal Kumar
Roll : - 13000320103
ECE_B
Practical Test 1*/


#include <stdio.h>
#include <math.h>
#define MAX 10

void Pascal_triangle();
void main(){
Pascal_triangle();
}

void Pascal_triangle()
{
    int rows;
    printf("Enter the number of rows: ",rows);
    scanf("%d",&rows);
    int C[MAX][MAX];
    for(int n=0;n<rows;n++)
    {
        for(int r=0;r<=n;r++)
        {
           //C[n][r]=(r==0 || r==n)?1:C[n-1][r-1]+C[n-1][r];//
           if (r==0 || r==n)
           C[n][r]=1;//For 1st and nth element (diagonal) to be 1//
           else
           C[n][r]=C[n-1][r-1]+C[n-1][r];
        }
       
    }
    for(int i=0;i<rows;i++) 
    {
     for(int k=1;k<(rows-i);k++)
        printf(" ");
    for(int j=0;j<=i;j++) 
        printf("%d ", C[i][j]) ;
      printf("\n") ;
       }
    
    }
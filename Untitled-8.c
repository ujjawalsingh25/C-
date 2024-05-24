#include <stdio.h>
#include <math.h>
#define MAX 10
void Pascal_invert();
void main(){
Pascal_invert();
}

void Pascal_invert()
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
           C[n][r]=1;//For 1st and nth element to be 1//
           else
           C[n][r]=C[n-1][r-1]+C[n-1][r];
        }
       
    }
    for(int n=(rows -1);n>=0;n--) 
    {
     for(int k=1;k<(rows-n);k++)
        printf(" ");
    for(int r=0;r<=n;r++) 
        printf("%d ", C[n][r]) ;
      printf("\n") ;
       }
    
    }
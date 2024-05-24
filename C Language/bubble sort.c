#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
void input_elements( int *, int );
void display(int *, int);
void bubble_sort(int *, int);
void main()
{
 int *a, N;
 //clrscr( );
 printf("\n Enter elements to be sort: ");
 scanf("%d", &N);
 a=(int *) malloc(sizeof(int)*N);
 input_elements( a, N);
 printf("\n Entered elements: ");
 display(a, N);
 bubble_sort (a, N);
 printf("\n The sorted elements are: ");
 display(a, N);
 getchar( );
}
void input_elements( int *x, int n)
{
 int i;
 for(i=0;i <n; i++)
 {
 printf("\n Element[%d]: ", i+1);
 fflush(stdin);
 scanf("%d",x+i);
 }
}
void display(int *x, int n)
{
 int i;
 printf("\n");
 for(i=0;i<n;i++)
 printf("\t %d", x[i]);
}
void swap_a(int *x, int *y)
{
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
    return;
}
void bubble_sort (int *x, int n)
{
int i, j,flag;
for(i=0, flag=1; i<n-1 && flag; i++)
for(j=0, flag=0; j<n-i-1; j++)
if(x[j]>x[j+1])
    {
        flag=1;
        swap_a(&x[j],&x[j+1]);
    } 
}
#include <stdio.h>
#include <math.h>
void swap_f(int x , int y)
{
  int t=x;
  x=y;
  y=t;
  return;
}
void swap_a(int*x , int*y)
{
  int num;
  num = *x;
  *x = *y;
  *y = num;
  return;
}

int main()
{
  int a;
  int b;
  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("\n Enter the value of b : ");
  scanf("%d",&b);
  printf("\n a = %d and b = %d",a,b);
  swap_f(a,b);
  printf("\n a = %d and b = %d -- Fake Swap",a,b);
  swap_a(&a,&b);
  printf("\n a = %d and b = %d -- Actual Swap",a,b);
return 0;
}
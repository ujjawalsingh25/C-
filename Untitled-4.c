#include <stdio.h> 

void main()
{ 
  int num;
  printf(" \n Enter the number of terms : ");
  fflush(stdin);
  scanf("%d",&num);
  int fibo[num]; 
  int i; 
  fibo[0] = 0; 
  fibo[1] = 1; 
  for(i = 2; i < num; i++) 
  fibo[i] = fibo[i-1] + fibo[i-2]; 
  for (i = 0; i < num; i++) 
  printf(" %6d\t",  fibo[i]); 
}

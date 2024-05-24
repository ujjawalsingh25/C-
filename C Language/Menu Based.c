#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
  if(n==0)
    return(1);
  else
    return(n*fact(n-1));  
}

int gcd( int x, int y)
{
  if(x==0)
    return(y);
  else if (y==0)
    return(x);
  else
    return(gcd(y%x, x)); 
}

int Combination( int n, int r )
{
  if(r ==0 || r ==n)
    return(1);
  else
    return(Combination(n-1, r-1) + Combination(n-1, r ));
}

int fibo( int n)
{
  if(n<=1)
   return(n);
  else
   return (fibo(n-2) + fibo(n-1));
}

void menu ( )
{
  int n, r, i, x, y;
  int choice;
  char ans;
  do
  {
    printf("\n MENU \n 1: For Factorial.\n 2: For GCD. \n 3: For Fibonacci Series. \n 4: For Combination Coefficient. \n 5: For EXIT. \n Enter your choice (1 to 5) : ");
    fflush(stdin);
    scanf("%d", &choice);
    switch(choice)
   {
    case 1:
     printf(" \n Enter the integer : ");
     fflush(stdin);
     scanf("%d",&n);
     printf(" \n Result %d! = %d ",n,fact(n));
    break;
    case 2:
     printf(" \n Enter the first integer : ");
     fflush(stdin);
     scanf("%d",&x);
     printf(" \n Enter the second integer : ");
     fflush(stdin);
     scanf("%d",&y);
     printf(" \n Result: GCD (%d,%d) = %d ",x,y,gcd (x,y));
    break;
    case 3:
     printf(" \n Enter the number of terms : ");
     fflush(stdin);
     scanf("%d",&n);
     for(i=0;i<n;i++)
      printf(" \t %d", fibo(i));
    break;
    case 4:
     printf(" \n Enter the value of n: ");
     fflush(stdin);
     scanf("%d", &n);
     printf(" \n Enter the value of r : ");
     fflush(stdin);
     scanf("%d", &r);
     printf("\n Result: C(%d,%d) = %d ",n,r,Combination (n,r));
    break;
    case 5:
     exit(1);
    default:
     printf(" \n Wrong choice…");
   }
   printf("\n Do you want to continue (Y/N)?");
   fflush(stdin);
   ans=getchar( );
 }while(ans=='Y' || ans=='y');
}

void main()
{
  menu();
}
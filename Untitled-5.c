#include <stdio.h>
#include <math.h>

int factorial (int digit)
{
    /*if (digit ==1 || digit == 0)
    return 1;
    else
    {
        return (digit * factorial (digit-1));
    }*/
    return (digit ==1 || digit == 0)?1 : (digit * factorial (digit-1));
    
}
int main()
{ 
 int num;
    printf("Enter the number : ",num);
    scanf("%d",&num);
    printf("The factorial of number %d is %d : ",num,factorial (num));

 
return 0;
}
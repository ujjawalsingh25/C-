/*Name :- Ujjawal Kumar
Roll : - 13000320103
ECE_B
Practical Test 1*/
#include<stdio.h>
#include<math.h>

int check_number();
int main()
{
   check_number();
    return 0;
}
int check_number()
{
    int i,j,k;
    for(i=1;i<=1000;i++)
    {
        int sum=0,r,t,u=0;
        int a=i;
        for(j=a;j!=0;j=j/10)
        {
            r=j%10;
            sum++;
        }
        for(k=a;k!=0;k=k/10)
        {
            t=k%10;
            u=u+pow(t,sum);
        }
        if (u==i)
        printf("%d\n",i);
    }
    return 0;
}
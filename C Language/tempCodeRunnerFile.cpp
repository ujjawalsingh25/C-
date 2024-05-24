#include<iostream>
using namespace std;

int main()
{
    printf("First Pattern\n");
    int a,b;
    for(a=1;a<=4;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Second Pattern\n");
    int v=9;
    int s,t,u;
    int x = v / 2;
    int y =1;
    for ( s = 1; s < v; s++)
    {
        
        for ( u = 1; u <= y; u++)
        {
            printf(" *");
        }
        if (s<= v /2)
        {
            x--;
            y+=1;
        }
        else
        {
            x++;
            y-=1;
        }
        printf("\n");
    } cout<<" *";
    return 0;
}
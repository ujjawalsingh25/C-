#include <stdio.h>
int main()
/* Name:- Ujjawal Kumar,
   Roll:- 13000320103.*/
//1st//
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
 //2nd//  
    printf("Second Pattern\n");
    int c,d;
    for(c=1;c<=4;c++)
    {
        for (d=1;d<=c;d++)
        {
            printf("%d",d);
        }
        printf("\n");
    }
//3rd//
    printf("Third Pattern\n");
    int e,f;
    for(e=1;e<=4;e++)
    {
        for (f=1;f<=e;f++)
        {
            printf("%d",e);
        }
        printf("\n");
    }
//4th//  
    printf("Forth Pattern\n");
    int g,h;
    int num=1;
    for ( g = 1; g <= 4 ; g++)
    {
        for (h = 1; h <= g; h++)
        {
        printf("%3d",num);
        num++;
        }
        printf("\n");
    }
//5th//
    printf("Fifth Pattern\n");
    int i, j, k;
    int l = 1;
    for (i = 1; i <= 4; i++)
    {
        for (k = 4; k >=i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%3d",l);
            l++;
        }
        printf("\n");
    }        
//6th//
    printf("Sixth Pattern\n");
    int m, n, o;
    for (m = 1; m<= 4; m++)
    {
        for (o = 3; o >=m; o--)
        {
            printf(" ");
        }
        for (n = 1; n <= m; n++)
        {
            printf(" %d", m);
        }
        printf("\n");
    }
//7th//
    printf("Seventh Pattern\n");
    int r = 5;
    int p,q;
    for (p = 1; p <= r; p++)
    {
        for (q = 0; q < p; q++)
    {
        printf("%d ", (p + q) % 2);
    }
        printf("\n");
    }
    //8th//
    printf("Eighth Pattern\n");
    int v=9;
    int s,t,u;
    int x = v / 2;
    int y =1;
    for ( s = 1; s < v; s++)
    {
        for ( t = 1; t <= x; t++)
        {
            printf("  ");
        }
        for ( u = 1; u <= y; u++)
        {
            printf(" *");
        }
        if (s<= v /2)
        {
            x--;
            y+=2;
        }
        else
        {
            x++;
            y-=2;
        }
        printf("\n");
    } 
//9th//
    printf("Ninth Pattern\n");
    int coef = 1, space, numb, nb;
    for (numb = 0; numb < 5; numb++)
    {
        for (space = 1; space <= 5 - numb; space++)
        printf("  "); 
        for (nb = 0; nb <= numb; nb++) 
        { 
            if (nb == 0 || numb == 0) coef = 1; 
            else coef = coef * (numb - nb + 1) / nb; 
            printf("%4d", coef); 
            }
            printf("\n");  
}  
//10th//
    printf("Tenth Pattern\n");
    int vr, row,vari;
    printf("Enter the no of lines for 10th pattern: ");
    scanf("%d", &row);
    for (vr = 1; vr <= row; vr++)
    {
        for (vari = 1; vari <= row - vr; vari++)
    {
        printf(" ");
    }
    for (vari = 1; vari <= vr; vari++)
    {
        printf("%d", vari);
    }
    for (vari = vr - 1; vari >= 1; vari--)
    {
        printf("%d", vari);
    }
    printf("\n");
    }
    
    
    for ( vr =row-1; vr >= 1; vr--)
    {
        for (vari = 1; vari <= row - vr; vari++)
    {
        printf(" ");
    }
        for ( vari = 1; vari <= vr; vari++)
        {
            printf("%d",vari);
        }
        for ( vari = vr-1; vari >= 1; vari--)
        {
            printf("%d" , vari);
        }
        printf("\n");
    } 

    return 0;
}




void double(int *x)
{
    *x= x*x;
}
void triple(int *y)
{
   y= y*y*y;
}

void main()
{
    int x=3;
    int y=4;
    double(&x);
    triple(&y);
}


void double( int*);
void triple( int*);

int main()
{
   int x = 5, y = 3;
   double(&x);
    triple(&y);
    printf("%d ",y);
   printf("%d ",x);
    return 0;
}
void double (int *a)
{
    *a = *a * 2;

}
void triple(int *b)
{
    *b = *b * 3;
}

void increase( int*,int*);

int main()
{
   int x = 5, y = 3;
   function(&x,&y);

   printf("%d %d",x,y);
    return 0;
}
void function (int *a, int  *b)
{
    int temp= *a;
    *a = (2*(*b))+3;
    *b = (3*temp)+2;

}
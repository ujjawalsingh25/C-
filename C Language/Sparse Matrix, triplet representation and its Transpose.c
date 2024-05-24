#include<stdio.h>
    int checkSparse(int a[10][10],int i, int j)
{
    int Total, row,column;
    for(row = 0; row < i; row++)
  	{
   		for(column = 0; column < j; column++)
    	{
    		if(a[row][column] == 0)
    		{
    			Total++;
			}
   	 	}
  	}
  	if(Total > (row * column)/2)
  	return 1;
	else
    return 0;
}
    void main()
    {
    int m,p,n,i,j,k,t=0,l,a[10][10],s[10][10],st[10][10];
    printf("\n Enter the no. of rows: ");
    scanf("%d", &m);
    printf("\n Enter the no. of columns: ");
    scanf("%d", &n);
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
           printf("Enter Element [%d][%d]:",i+1,j+1 );
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Entered Elements:- \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
          printf(" %2d ", a[i][j]); 
          if (j == n-1)
          {
              printf("\n");
          }
        }
    }
    if(checkSparse(a,m,n)==1)
    {
    k=1;
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        {

          if(a[i][j]!=0)
           {
            s[k][0]=i;
            s[k][1]=j;
            s[k][2]=a[i][j];
            k++;
            if(j>t)
            t=j;
           }
        }
     }

    s[0][0]=m;
    s[0][1]=n;
    s[0][2]=k-1;
    printf("Triplet representation of the Matrix is\n");

    for(i=0;i<k;i++)
      {
         printf("\n");
         for(j=0;j<3;j++)
           {
             printf(" %d",s[i][j]);
           }
      }
    p=1;
    l=k-1;
    for(i=0;i<=t;i++)
      {
         k=1;
         for(j=0;j<l;j++)
            {
              if(s[k][1]==i)
                {
                   st[p][1]=s[k][0];
                   st[p][0]=s[k][1];
                   st[p][2]=s[k][2];
                   p++;
                   k++;
                }
             else
             k++;
           }
     }

    st[0][0]=s[0][1];
    st[0][1]=s[0][0];
    st[0][2]=s[0][2];
    printf("\nTranspose of the sparse matrix is\n");
    for(i=0;i<p;i++)
       {
        printf("\n");
        for(j=0;j<3;j++)
           {
             printf(" %d",st[i][j]);
           }
       }
     getc;
    }
    else
        printf("\nNot A Sparse Matrix");
    }
void diff(int matrix[][], int n)
{
    int i,j, s1 =0,s2=0;
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        { 
           if(i>=j)
           {
               s1=s1+matrix[i][j];
           }
           if(i<=j)
           {
               s2=s2+matrix[i][j];
           }
}return (s1-s2);
}
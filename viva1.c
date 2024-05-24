int max=x[0],min=x[0],i,product;
int source[int n], dest[int n]
if (source[i]>max)
{
    max=source[i];
}
if (source[i]<min)
{
    min= source[i];
}
if (source[i]%2==0)
{
    even=source[i]+1;
}
else
{
    odd= source[i]-1;
}
for(i=0;i<n;i++)
{
    /*if (source[i]==max)
    {source[i]=max+1;}
    else if (source[i]==min)
    source[i]=min-1;
    else
    source[i]=source[i];*/
   product= max*min;
    for (i=0;i<n;i++)
    dest[i]=product*source[i];
}
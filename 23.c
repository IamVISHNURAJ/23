#include<stdio.h>
int main()
{
    int n,a[n],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   j=a[0];
   for(i=1;i<n;i++)
   {
    if(j>a[i])
    {
        j=a[i];
    }
   }
    printf("%d",j);
    return 0;
}
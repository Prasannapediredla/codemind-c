#include<stdio.h>
int main()
{
    int n,a[30],i,s=0,b[20],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]%2!=0)
            {
                s++;
            }
    }
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0,j=s;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
 
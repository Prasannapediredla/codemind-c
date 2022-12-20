#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,avg,sum=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
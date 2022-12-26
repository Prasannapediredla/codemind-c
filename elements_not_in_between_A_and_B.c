#include<stdio.h>
int main()
{
    int p=0,n,k[200],a,b,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(k[i]<a || k[i]>b)
        {
            printf("%d ",k[i]);
            p++;
        }
    }
    if(p==0)
    {
    printf("-1");
    }
}

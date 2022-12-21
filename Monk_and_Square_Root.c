#include<stdio.h>
int main()
{
    int t,m,n,fi;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        fi=0;
        for(int i=0;i<=m;i++)
        {
    long int temp=(long int)i*i;
    if(temp%m==n)
    {
        printf("%d
",i);
        fi=1;
        break;
    }
    }
    if(fi==0)
    {
        printf("-1
");
    }
    }
}
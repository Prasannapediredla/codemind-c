#include<stdio.h>
int main()
{
    int e,m,p,c,com;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&com);
    if(e>34&&m>34&&p>34&&c>34&&com>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}
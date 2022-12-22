#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)//1+
    {
        s+=i;
        i++;
    }
    printf("%d",s);
}
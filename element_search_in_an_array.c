#include<stdio.h>
int main()
{
    int a[10000],i,n,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}
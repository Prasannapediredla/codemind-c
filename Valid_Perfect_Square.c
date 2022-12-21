#include<stdio.h>
int main()
{
    int n,arr[1000],i,p,j;
    scanf("%d",&n);//1
    for(i=0;i<n;i++)//i=0<1
    {
        scanf("%d",&arr[i]);//14
    }
    for(i=0;i<n;i++)//i=1<2
    {
        for(j=1;j<=arr[i]/2;j++)//j=4<8
        {
            p=j*j;//p=
            if(arr[i]==p)//14==16
            {
                printf("True
");
                break;
            }
        }
        if(arr[i]!=p)
        {
            printf("False
");
        }
    }
}

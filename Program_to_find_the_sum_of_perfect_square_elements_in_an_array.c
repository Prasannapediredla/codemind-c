#include<stdio.h>
int main()
{
    int n,i,j,sum=0,x=0,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        x=0;
        for(j=0;j<=temp;j++)
        {
            if(temp==j*j)
            {
                x=1;
                break;
            }
        }
        if(x==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}

#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);//n=5
    for(i=0;i<n;i++)//0<5
    {
        scanf("%d",&arr[i]);//1 2 3 4 5
    }
    i=0;
    start:
    if(i<n)//2<5
    {
        s+=arr[i];//3
        i++;//2
        goto start;
    }
    printf("%d",s);
}
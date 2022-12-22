#include<stdio.h>
int main()
{
    float i,l,s=0;
    scanf("%f",&l);
    for(i=1;i<=l;i++)
    {
        s+=1/i;
    }
    printf("%.2f",s);
}
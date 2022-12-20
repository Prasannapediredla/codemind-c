#include<stdio.h>
int main()
{
    int a[100],max,size,c,loc=1;
    scanf("%d",&size);
    for(c=0;c<size;c++)
    scanf("%d",&a[c]);
    max=a[0];
    for(c=1;c<size;c++)
    {
        if(a[c]>max)
        {
            max=a[c];
            loc=c+1;
        }
    }
    printf("%d
",max);
    return 0;
}
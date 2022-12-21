#include<stdio.h>
int main()
{
    int x,y,c,i;
    scanf("%d%d",&x,&y);//2 13
    for(x;x<=y;x++)//3<=13
    {
        c=0;
        for(i=1;i<=x;i++)//i=1<=3
        {
            if(x%i==0)//2%2==0
            {
                c++;//c=2
            }
        }
        if(c==2)
        {
            printf("%d
",x);
        }
    }
}

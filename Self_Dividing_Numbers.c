#include<stdio.h>
int main()
{
    int x,y,r,c,co,n;
    scanf("%d%d",&x,&y);//x=1 y=22
    for(x;x<=y;x++)//2<=22
    {
        n=x;//n=2
        co=0;
        c=0;
        while(n>0)//1>0
        {
            r=n%10;//r=1
            n/=10;//n=0
            co++;//co=1
            if(r==0)
            {
            	break;
			}
            if(x%r==0)//1%1==0
            {
                c++;//c=1
            }
        }
        if(c==co)
        {
            printf("%d ",x);
        }
    }
}